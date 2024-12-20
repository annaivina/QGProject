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

	
### 3. Prepare your raw COCOA root files for the HGPFLOW processing
- After successfully preparing the COCOA root files, you must prepare them to be trained on HGPFLOW NN. 
First, you need to remove cocoa events with no tracks, cells, or clusters. You use code in `scripts/copyTree.c` for this. I took it from Etienne; I know one can do better, but I have no strength for this. Inside the code, just specify the path of the cocoa directory files and write down the names of inputs. Then run it as `root -l scripts/copyTree.c`
- Now you are almost ready to train HyperGraph; before this, you need to run the segmentation on those files so each event will be divided to be processed faster.
- For this purpose, you Ask Nilotpal to give you the HGPFlow mini-version. It is supposed to be located here [HGPflow](https://github.com/nilotpal09/HGPflow) 
- Then, to submit for the segmentation, you use the available in `scripts/submit_job_cocoa_chunks_new.py` script - this one already has everything set up to process our files (500GeV Zq/g jets)
- Here, `is_inference=False` and `mod_e_th = 0.1` for train and validation samples, or else `is_inference=True` and `mod_e_th  = 0` 

### 4. Training and predicting using HGPFLOW 
Congratulations! You have reached the exciting part of the project. Run the training on HGPFlow using our samples (500 GeV jets)

Ensure you copy the config files in this git to the git folder where you set up your HGPFLow code. configs --> hgpflow/congifs and hgpflow/pbs_scrips to hgpflow_v2 git folder

- Running the stage 1 training: `python pbs_scripts/submit_job.py -m train -cv configs/model_configs/var_mini.yml -cms1 configs/model_configs/model_stage1_mini.yml -ct configs/train_incidence_200k.yml -gt A6000`
- Preparation for stage 2: `python pbs_scripts/submit_job.py -m hyperedge_data_prep -i configs/inference_stage1.yml -gt A6000 -mem 3gb --io 20`
- Running the stage 2 training: `python pbs_scripts/submit_job.py -m train -cms2 configs/model_configs/model_stage2.yml -ct configs/train_hyperedge_200k.yml -gt A6000 -nc 5`  (I did it locally - something didnt work for me, the local code is `python -m hgpflow_v2.train -cms2 configs/model_configs/model_stage2.yml -ct configs/train_hyperedge_200k.yml`
- Doing the evaluations: `python pbs_scripts/submit_job.py -m eval -i configs/inference_200k.yml -gt A6000 -nc 5 --io 20`


Here, in those general configs like train_incidence_200k.yml or train_hyperedge_200k.yml, you need to write your own directory.

In general `Nathalie`, just copy my whole hgpflow folder so you will not need to do anything: in our storage you find ...annai/QURK-GLUON/samples_produce/Cocoa/HGPFLOW_v2/hgpflow_v2


### 5. Prepare your predicted HGPFlow outputs and your truth outputs for Q/G classification training

After you have the predictions, you need to make npz files to be processed later by QG processor. For that you can use ipynp `scripts/performance_save.ipynb`
- There are a few things here. This notebook was created for hgpflow_full and not the mini version. I had to do a bunch of things in the performance code to save the needed information correctly. If Nilotpal says that it ok, you can use the same code as you have the prediction files. I have already modified it a bit because there was a problem with event_offset. I ran it on new predictions it looks ok. I think you might want to change the pt of the jet which you save (~400-800GeV) maybe? up to you. This notebook also will shuffle the files between pythia Zq and Zg - please dont miss this step.

- Now, the shuffled npz files need to be processed to match the Q/G format. The file name you need is `scripts/convert_qg_datasets_new_hgpflow.py` - after this step you are ready to train the hgpflow inputs on QG script.
- Additionally, you maybe would like to do the truth jet training. For this perpose you need to convert root->npz-->QGformat as in hgflow cas. But now you use ipynb `scripts/make_datasets.ipynb` You can just hadd all root files you have and process one file there. After that you need to use `scripts/convert_qg_datasets_new.py`

### 6. Train and predict using ParticleNet 

Congratulations. Now, you are finally ready to train on ParticleNet. So, I have made some packages that will take all their functions and their libraries in one place and train the models. Initially, I combined those two: [PartikleTransformer]https://github.com/jet-universe/particle_transformer/ (the new and old models setup) and [WeaverCore]https://github.com/hqucms/weaver-core - this is the place where the models and all configurations are actually stored. I failed adequately set up the Wevercore, got pissed and just made a new big package. It works well for our PaticleNet model, which is what we need. If you find something that needs to be added, go ahead and change it. 

- you can use this git version of my new code here to train and test the files: [PartNet_Local]https://github.com/annaivina/PartNet_Local/tree/main
- What you need to do is very simple: you need to create a submit script for training (or you can use one of the existing ones you can check their names easdy to understand). 
- The most important thing you need to choose is what you want to train on: only kin or kin+pid, PartikleNet or PartikleTransformer model. That's about it
- If, for whatever reason, this will not work, you can always go to my storage directory at Weizmann and see ... annai/QURK-GLUON/PartNet_Local
### 7. Check results 
-- You can use rates.ipynb in my ParticleNet folder or you can create your own 

## Samples and Statistics involved

**Samples**

All samples shall be accessible if I have given relevant permissions. 

- Pythia samples can be found in my work directory under .. annai/QURK-GLUON/samples_produce/Pythia_Zgjets or .. annai/QURK-GLUON/samples_produce/Pythia_Zqjets
- Cocoa samples are located in .. annai/QURK-GLUON/samples_produce/Cocoa/Cocoa_Zjets/. Relevant folders are 500GeVPythiaZq/500GeVPythiaZg/500GeVHerwigZq500GeVHerwigZg
- Inside the cocoa sample directories, you will also find the skimmed version of the samples as well as segmented samples for HGPFlow task in train/valid/test folders
- Inside my weizmann storage, there are also Herwig and Pythia samples from the original paper you can use it as well: annai/QURK-GLUON/QG_herwig or annai/QURK-GLUON/QG_pythia

**Statistics**
- We generated Zq and Zg samples using Herwig and Cocoa (399k each)
- Out of those, we used 100k Zq Pythia and 100k Zg Pythia for Training on HGPflow and 10k Zq Pythia and 10k Zg Pythia for the validation
- Thus, For predictions and further usage, we will have 289k for Pythia Zq/Zg each and 399k for Herwig Zq/Zg each 

