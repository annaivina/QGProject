export CURRENTDIR=$(pwd)

echo "Setting up GEANT4"
source /cvmfs/sft.cern.ch/lcg/releases/LCG_104/Geant4/11.1.2/x86_64-el9-gcc11-opt/Geant4-env.sh
cd /cvmfs/sft.cern.ch/lcg/releases/LCG_104/Geant4/11.1.2/x86_64-el9-gcc11-opt/share/Geant4/geant4make/
echo "Setting up Geant4make"
source /cvmfs/sft.cern.ch/lcg/releases/LCG_104/Geant4/11.1.2/x86_64-el9-gcc11-opt/share/Geant4/geant4make/geant4make.sh
echo "Setting up ROOT"
source /cvmfs/sft.cern.ch/lcg/releases/LCG_104/ROOT/6.28.04/x86_64-el9-gcc11-opt/ROOT-env.sh
echo "Setting up jsoncpp"
source /cvmfs/sft.cern.ch/lcg/releases/LCG_104/jsoncpp/1.9.3/x86_64-el9-gcc11-opt/jsoncpp-env.sh
echo "Setting up CMake"
source /cvmfs/sft.cern.ch/lcg/releases/LCG_104/CMake/3.26.2/x86_64-el9-gcc11-opt/CMake-env.sh
echo "Setting up cmaketools"
source /cvmfs/sft.cern.ch/lcg/releases/LCG_104/cmaketools/1.8/x86_64-el9-gcc11-opt/cmaketools-env.sh
echo "Setting up FastJet"
source /cvmfs/sft.cern.ch/lcg/releases/LCG_104/fastjet/3.4.1/x86_64-el9-gcc11-opt/fastjet-env.sh

# < install hepmc3 if not done yet >
export HEPMC_HOME=/storage/agrp/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-install/
#ln -s ${HEPMC_HOME}/lib64 ${HEPMC_HOME}/lib
# < install pythia 8, using './configure --with-hepmc3=${HEPMC_HOME}' >
export PYTHIA8_HOME=/storage/agrp/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/Pythia8/pythia8311/
export PYTHIA8DATA=$PYTHIA8_HOME/share/Pythia8/xmldoc   
cd $CURRENTDIR
