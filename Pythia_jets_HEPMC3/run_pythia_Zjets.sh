pythiadir="/storage/agrp/annai/QURK-GLUON/Pythia_jets_HEPMC3/"
outdir="/storage/agrp/annai/QURK-GLUON/samples_produce/Pythia_Zgjets/500GeVjets/"

echo "Starting pythia job ${jobID}..."

mkdir -p ${outdir}
cd ${pythiadir}
source setup_cvmfs_hepmc3_alma.sh

export LD_LIBRARY_PATH="$PYTHIA8_HOME/lib:$HEPMC_HOME/lib:$LD_LIBRARY_PATH"


for ((i=0; i<10; i++))
do
    seed=$((jobID + i))

    cmd="./pythia_Zgjets ${seed} ${Nevents}"
    echo ${cmd}
    ${cmd}

    echo "Subjob ${jobID} seed ${seed} finished!"
done

echo "Job ${jobID} completed!"
touch ${outdir}/finish_pythia_job${jobID}
