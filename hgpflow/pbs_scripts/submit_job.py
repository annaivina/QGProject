import os
import yaml
import shutil
from pathlib import Path
import random, string
import argparse

#To submit the job for stage 1 : python submit_job.py -m train -cv var_mini.yml -cms1 model_stage1_mini.yml  -ct train_incidence_250k.yml -gt A6000

ncpus = '10'
ngpus = '1'
mem   = '40gb' # 110gb (COCOA S1 train) | 30gb (COCOA S2 train) 
walltime = '72:00:00'

# mem:
# CLIC: (70GB) 150k no cell | (125GB) 350k no cell | (148GB) 150k with cell

cwd = os.path.dirname(os.path.realpath(__file__))
run_dir = os.path.dirname(cwd)

# argparse
parser = argparse.ArgumentParser()

parser.add_argument('--mode', '-m', type=str, required=True,
                    help='train | hyperedge_data_prep | eval')

parser.add_argument('--config_path_var', '-cv', type=str, required=False)
parser.add_argument('--config_path_model_stage1', '-cms1', type=str, required=False)
parser.add_argument('--config_path_model_stage2', '-cms2', type=str, required=False)
parser.add_argument('--config_path_train', '-ct', type=str, required=False)
parser.add_argument('--congif_path_inference', '-i', type=str, required=False)

parser.add_argument('--ncpus', '-nc', type=str, required=False, default=ncpus)
parser.add_argument('--ngpus', '-ng', type=str, required=False, default=ngpus)
parser.add_argument('--mem', '-mem', type=str, required=False, default=mem)
parser.add_argument('--gputype', '-gt', type=str, required=False, default=None)
parser.add_argument('--walltime', '-wt', type=str, required=False, default=walltime)
parser.add_argument('--io', '-io', type=str, required=False, default='5')
parser.add_argument('--job_flag', '-jflag', type=str, required=False, default='')

parser.add_argument('--precision', '-p', type=str, required=False, default='medium')

args = parser.parse_args()



mode = args.mode
if mode=='train':

    config_path_t = args.config_path_train
    config_path_v = args.config_path_var
    config_path_ms1 = args.config_path_model_stage1
    config_path_ms2 = args.config_path_model_stage2

    assert config_path_t is not None
    stage1_condition = (config_path_v is not None) and (config_path_ms1 is not None) and (config_path_ms2 is None)
    stage2_condition = (config_path_v is None) and (config_path_ms1 is None) and (config_path_ms2 is not None)
    assert stage1_condition or stage2_condition, \
        "stage1 and stage2 are mutually exclusive\n" + \
        "stage1: need exactly --config_path_var (-cv), --config_path_model_stage1 (-cms1)\n" + \
        "stage2: need exactly --config_path_model_stage2 (-cms2)"
    
    config_path_t = os.path.abspath(config_path_t)
    with open(config_path_t, 'r') as fp:
        config_t = yaml.safe_load(fp)

    if stage1_condition:
        print("\033[96mTraining stage 1\033[00m")
        with open(config_path_v, 'r') as fp:
            config_v = yaml.safe_load(fp)
        with open(config_path_ms1, 'r') as fp:
            config_ms1 = yaml.safe_load(fp)
        config_ms2 = None
    else:
        print("\033[96mTraining stage 2 with frozen stage 1\033[00m")
        with open(config_path_ms2, 'r') as fp:
            config_ms2 = yaml.safe_load(fp)

        # get config_v and config_ms1 from frozen stage1
        config_path_v = config_t['config_path_v']
        with open(config_path_v, 'r') as fp:
            config_v = yaml.safe_load(fp)
        config_path_ms1 = config_t['config_path_ms1']
        with open(config_path_ms1, 'r') as fp:
            config_ms1 = yaml.safe_load(fp)

    exp_key  = f'{config_t["run_name"]}xxx'
    exp_key += ''.join(random.choices(string.ascii_lowercase + string.digits, k=32-len(exp_key)))

    dst = f'{config_t["base_root_dir"]}/{config_t["project_name"]}/{exp_key}'
    Path(dst).mkdir(parents=True, exist_ok=True)

    new_config_path_t = os.path.join(dst, 'config_t.yml')
    shutil.copyfile(config_path_t, new_config_path_t)

    new_config_path_v = os.path.join(dst, 'config_v.yml')
    shutil.copyfile(config_path_v, new_config_path_v)

    new_config_path_ms1 = os.path.join(dst, 'config_ms1.yml')
    shutil.copyfile(config_path_ms1, new_config_path_ms1)

    if config_path_ms2 is not None:
        new_config_path_ms2 = os.path.join(dst, 'config_ms2.yml')
        shutil.copyfile(config_path_ms2, new_config_path_ms2)

    command  = f'qsub -o {dst}/output.log -e {dst}/error.log'
    command += f' -q gpu -N hgpfv2_train -l walltime={args.walltime},mem={args.mem},ncpus={args.ncpus},ngpus={args.ngpus},io={args.io}'
    if args.gputype is not None:
        command += f',gputype={args.gputype}'

    command += f' -v MODE="{mode}",CONFIG_PATH_T="{new_config_path_t}",EXP_KEY="{exp_key}",PRECISION="{args.precision}",RUN_DIR="{run_dir}"'
    if stage1_condition:
        command += f',CONFIG_PATH_V="{new_config_path_v}",CONFIG_PATH_MS1="{new_config_path_ms1}"'
    else:
        command += f',CONFIG_PATH_MS2="{new_config_path_ms2}"'

    command += f' {cwd}/run_on_node.sh'


elif mode=='hyperedge_data_prep' or mode=='eval':

    job_name = f'hgpf_v2_eval'
    if mode=='hyperedge_data_prep':
        job_name = f'hgpf_v2_he_data_prep'
    if args.job_flag != '':
        job_name += f'_{args.job_flag}'

    assert args.congif_path_inference is not None

    with open(args.congif_path_inference, 'r') as fp:
        inference_config = yaml.safe_load(fp)

    dst = inference_config['init']['model']['config_path_v'].replace('config_v.yml', 'inference')
    Path(dst).mkdir(parents=True, exist_ok=True)

    command  = f'qsub -o {dst}/{args.job_flag}_output.log -e {dst}/{args.job_flag}_error.log'
    command += f' -q gpu -N {job_name} -l walltime={args.walltime},mem={args.mem},ncpus={args.ncpus},ngpus={args.ngpus},io={args.io}'
    if args.gputype is not None:
        command += f',gputype={args.gputype}'
    command += f' -v MODE="{mode}",CONFIG_PATH_INFERENCE="{args.congif_path_inference}",RUN_DIR="{run_dir}"'
    command += f' {cwd}/run_on_node.sh'

print(command)
os.system(command)
