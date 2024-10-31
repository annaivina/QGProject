import os
import uproot
import numpy as np
import argparse
from pathlib import Path

cwd = os.path.dirname(os.path.realpath(__file__))
run_dir = os.path.dirname(cwd)
print("$RUN_DIR:", run_dir)


ncpus = 1
mem = '3gb'
walltime = '11:00:00'
io = "0.5"

detector = 'cocoa'
tree_name = 'Out_Tree'
bandwidth = 0.4
num_nodes_min = 1
skip_cells = True
estart = 0


# bad files
# 1550, 1428(?), 1716, 2062, 2164, 2405, 2716  |  724




input_path_base = '/srv01/agrp/annai/annai/QURK-GLUON/samples_produce/Cocoa/Cocoa_Zjets/500GeVPythiaZq/cocoa_Zjets_500GeV_Pythia_jobREPLACEME_PseedREPLACEME_CseedREPLACEME_1000events_skim.root ' 



# test
is_inference = True #set to False if it is train and valid 
mod_e_th = 0.1 #100 MeV - set to 0 while inference 
output_dir = '/srv01/agrp/annai/annai/QURK-GLUON/samples_produce/Cocoa/Cocoa_Zjets/500GeVPythiaZq/valid'
for chunk in list(range(101, 111)):
#     if chunk in [724]:
#         continue
    

    input_filepath = input_path_base.replace('REPLACEME', str(chunk))
    estop = uproot.open(input_filepath)[tree_name].num_entries

    output_filepath = os.path.join(output_dir, f'cocoa_Pythia_Zg_chunk_{chunk}_seg.root')

    dst_dir = os.path.join(output_dir, "pbs_logs")
    Path(dst_dir).mkdir(parents=True, exist_ok=True)
    dst_path_base = os.path.join(dst_dir, output_filepath.split("/")[-1].replace(".root", ""))

    eo = chunk * 1000 
    
    command  = f'qsub -o {dst_path_base}_output.log -e {dst_path_base}_error.log'
    command += f' -q N -N hgpf_seg_{chunk} -l walltime={walltime},mem={mem},ncpus={ncpus},io={io}'

    command += f' -v RUN_DIR="{run_dir}",DETECTOR="{detector}",'
    command += f'INPUT_FILEPATH="{input_filepath}",TREE_NAME="{tree_name}",ENTRY_START="{estart}",ENTRY_STOP="{estop}",'
    command += f'OUTPUT_FILEPATH="{output_filepath}",IS_INFERENCE="{is_inference}",BANDWIDTH="{bandwidth}",'
    command += f'EVENTNUMBER_OFFSET="{eo}",'
    command += f'NUM_NODES_MIN="{num_nodes_min}",MOD_E_TH="{mod_e_th}",SKIP_CELLS="{skip_cells}"'
    
    command += f' {cwd}/run_on_node.sh'

    print(command)
    os.system(command)
