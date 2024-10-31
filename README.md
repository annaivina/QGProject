# QGProject

This repository contains all the codes, links, and info about how to make the Q/F classification and comparisons.

---

### 1. Monte Carlo Pythia Samples Generation

You can make the Monte Carlo Pythia samples - use `Pythia_jets_HEPMC3` folder:

- Here you can write your own script or use existing ones: `pythia_Zgjets.cc`, `pythia_Zqjets.cc`, or `dijets.cc`
- Change the scripts to what you need, then do `source setup_cvmfs_hepmc3_alma.sh` and build the functions with `make`
- To run on the cluster, use `submit_Zq` or `submit_Zq` shell scripts, which call `run_pythia_Zjets.sh`. You’ll need to adjust this file accordingly.

**Note:** If you cannot build Pythia, it might be because:
  - You need to first build Pythia8 and HepMC3 (consider using the provided directory to simplify this process).

#### Building Pythia8 and HepMC3 from Scratch

For those particularly interested in building their own Pythia8 and HepMC3:

1. **Build HepMC3**  
   Follow the instructions at [HepMC3 GitLab](https://gitlab.cern.ch/hepmc/HepMC3) (use manual installation). The specific commands I use are:

   ```bash
   conda activate appenv
   source /cvmfs/sft.cern.ch/lcg/releases/LCG_96b/ROOT/6.18.04/x86_64-centos7-gcc8-opt/ROOT-env.sh
   cmake -DCMAKE_INSTALL_PREFIX=../hepmc3-install -DHEPMC3_ENABLE_ROOTIO:BOOL=ON -DROOT_DIR=$ROOTSYS -DHEPMC3_ENABLE_PROTOBUFIO:BOOL=OFF -DHEPMC3_ENABLE_TEST:BOOL=OFF -DHEPMC3_INSTALL_INTERFACES:BOOL=ON -DHEPMC3_BUILD_STATIC_LIBS:BOOL=OFF -DHEPMC3_BUILD_DOCS:BOOL=OFF ../HepMC3
   make
   make install
   ```
   
   
2. **Pythia8** 
	
	Download and unpack Pythia:

   ```bash
   tar xvfz pythia8311.tgz
   export HEPMC_HOME=/storage/agrp/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-install/  # or the directory where you just installed hepmc-install
   ln -s ${HEPMC_HOME}/lib64 ${HEPMC_HOME}/lib  # Link lib64 to lib - very important step
   cd pythia8
   ./configure --with-hepmc3=${HEPMC_HOME}
   make
   ``` 
   
   
		
**Note**
   
   I put my build `pythia8` and `hepmc3` directories with all necessary files to the git. 
   You can try using my build directory to make stuff, but dont forget to change the main setup file paths to yours in setup_cvmfs_hepmc3_alma.sh
   
   
		
### 2. Make COCOA Samples 

After successfully setting up, you need to pass the events through `COCOA`. There is a development branch in `cocoa-hep` from Patrick (`origin/dev_g410_pythia8HepMCPlugin`), but I made changes, and my modified version of `COCOA` works with the setup above. It is available in the `cocoa-hep` folder.

To run this:
- Add configuration files to the `cocoa-hep/COCOA/macro/HepMC/` folder, where you will manually specify which sample you want to process (add the full path; see examples in `HepMC`).
  - Note: This step is required because of a bug in Patrick’s script, which prevents specifying the file during runtime, so it must be done manually.
- After adding all the files you want to process, go to `cocoa_submit/` and update the paths to your input and output directories, as well as the macro files you will be using.
- Run the jobs using `submit_*.sh`.	

	
z

