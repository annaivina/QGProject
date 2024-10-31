pythia_base_dir = "/storage/agrp/annai/QURK-GLUON/Pythia_jets/"
outdir = "/storage/agrp/annai/QURK-GLUON/samples_produce/Pythia_qq/"

N_events_unique = 10000000
N_events_job    = 1000
N_replicas      = 1

mode = "pythia"
script = pythia_base_dir + "/run_pythia_nonreplicas.sh" 


sleep = 5

wtime = '5:59:00'
mem   = '8g'     

def get_command(jobID,Pseed,Cseed):
    outlog = "{}/out_{}_Pseed{}_Cseed{}.log".format(outdir,mode,Pseed,Cseed)
    errlog = "{}/err_{}_Pseed{}_Cseed{}.log".format(outdir,mode,Pseed,Cseed)
    return "qsub -q N -l walltime={},mem={} -o {} -e {} -v jobID={},Pseed={},Cseed={},Nevents={} {}".format(wtime,mem,outlog,errlog,jobID,Pseed,Cseed,N_events_job,script)



for Pseed in range(1, int(N_events_unique/N_events_job) + 1):

    if mode == "pythia" and (Pseed % 10)==0:
        jobID = Pseed
        cmd = get_command(jobID,Pseed,0)
        print(cmd)

