cocoadir="/storage/agrp/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/cocoa-hep/COCOA"
outdir="/storage/agrp/annai/QURK-GLUON/samples_produce/Cocoa/Cocoa_Zjets/"
echo "Starting cocoa job ${jobID}..."

mkdir -p ${outdir}
source ${cocoadir}/../setup_cvmfs_hepmc3_alma.sh
cd ${cocoadir}


cocoaout=${outdir}/500GeVPythiaZq/cocoa_Zjets_500GeV_Pythia_job${jobID}_Pseed${Pseed}_Cseed${jobID}_${Nevents}events.root
macro=${cocoadir}/macro/HepMC/Zq/hepmc_Zjets_${Pseed}.in
config=${cocoadir}/config/config_Zjets.json

cmd="${cocoadir}/build/COCOA --config ${config} --macro ${macro} --output ${cocoaout} --seed ${jobID} --nevents ${Nevents}"
echo ${cmd}
${cmd}

echo "Job ${jobID} finished!"
touch ${outdir}/finish_cocoa_job${jobID}_Pseed${Pseed}_Cseed${jobID}
