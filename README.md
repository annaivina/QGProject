# QGProject
This repository contains all the codes, link and info about how to make the Q/F classification and comparisons 

1. You can make the Monte Carlo Pythia samples - use Pythia_jets_HEPMC3 folder
	-- Here you can write you own script or you use existing ones - pythia_Zgjets.cc or pythia_Zqjets.cc or dijets.cc 
	-- Change the scripts to what you need then do source setup_cvmfs_hepmc3_alma.sh an then build the functions as 'make'
	-- To run on the cluster you need to use submit_Zq or submit_Zq - those shell scripts use run_pythia_Zjets.sh file which you need to change the function accordingly.
	-- NPB: if you cannot build pythia this is probably because: a) you need to first build pythia8 and build hepmc3 (unless you are very desperate to do so I suggest you use my directory) 
	
	For those who are particularly intrigued building their own pythia8 and hepmc3:
	A) First build  hepmc3 as wiritten here - https://gitlab.cern.ch/hepmc/HepMC3  (use manual installation please!) what I specifically have for building form the scratch is 
	
		conda activate appenv
		source /cvmfs/sft.cern.ch/lcg/releases/LCG_96b/ROOT/6.18.04/x86_64-centos7-gcc8-opt/ROOT-env.sh
		cmake -DCMAKE_INSTALL_PREFIX=../hepmc3-install -DHEPMC3_ENABLE_ROOTIO:BOOL=ON -DROOT_DIR=$ROOTSYS -DHEPMC3_ENABLE_PROTOBUFIO:BOOL=OFF -DHEPMC3_ENABLE_TEST:BOOL=OFF -DHEPMC3_INSTALL_INTERFACES:BOOL=ON -DHEPMC3_BUILD_STATIC_LIBS:BOOL=OFF -DHEPMC3_BUILD_DOCS:BOOL=OFF  ../HepMC3
		Make 
		Make install
		
	B) Pythia8 
	
		Downmload and Unpack pythia: tar xvfz pythia8311.tgz
		export HEPMC_HOME=/storage/agrp/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-install/ ( or the directory where you just installed hepmc-install)
		ln -s ${HEPMC_HOME}/lib64 ${HEPMC_HOME}/lib ( to link the lib64 to lib - very important step)
		cd pythi8
		./configure --with-hepmc3=${HEPMC_HOME}
		make 
		
	C) I putmy build pythia8 and hepmc directories with all necessary files to the git you can try using my build directory to make run stuff but dont forget to change the main setup file paths to yours (setup_cvmfs_hepmc3_alma.sh)
		
2. After success you need to pass the events though COCOA. Now, there is a developing branch in cocoa but I changed it and my own changed cocoa works with the setup above. I put here my working branch in folder
