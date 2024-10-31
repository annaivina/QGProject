# PYTHIA configuration file.
# Generated on Fri Nov 1 11:01:07 CET 2019 with the user supplied options:
# --prefix=/cvmfs/sft.cern.ch/lcg/releases/MCGenerators/pythia8/301-27bc2/x86_64-centos7-gcc8-opt
# --with-hepmc2=/cvmfs/sft.cern.ch/lcg/releases/HepMC/2.06.10-1a364/x86_64-centos7-gcc8-opt
# --with-lhapdf6=/cvmfs/sft.cern.ch/lcg/releases/MCGenerators/lhapdf/6.2.3-752bc/x86_64-centos7-gcc8-opt
# --cxx-common=-std=c++17 -fPIC

# Install directory prefixes.
PREFIX_INCLUDE:=$(PYTHIA8_HOME)/include
PREFIX_LIB:= $(PYTHIA8_HOME)/lib


# Compilation flags (see ./configure --help for further documentation).
CXX=/cvmfs/sft.cern.ch/lcg/releases/gcc/8.3.0-cebb0/x86_64-centos7/bin/g++
CXX_COMMON=-std=c++17 -fPIC
CXX_SHARED=-shared
CXX_SONAME=-Wl,-soname,
LIB_SUFFIX=.so

EVTGEN_USE=false
EVTGEN_CONFIG=
EVTGEN_BIN=
EVTGEN_INCLUDE=
EVTGEN_LIB=

FASTJET3_USE=false
FASTJET3_CONFIG=
FASTJET3_BIN=
FASTJET3_INCLUDE=
FASTJET3_LIB=

HEPMC2_USE=false
HEPMC2_CONFIG=
HEPMC2_BIN=
HEPMC2_INCLUDE=
HEPMC2_LIB=

HEPMC3_USE=true
HEPMC3_INCLUDE:=-I/storage/agrp/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-install/include
HEPMC3_LIB:=-L/storage/agrp/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-install/lib -lHepMC3

LHAPDF5_USE=false
LHAPDF5_CONFIG=
LHAPDF5_BIN=
LHAPDF5_INCLUDE=
LHAPDF5_LIB=

LHAPDF6_USE=true
LHAPDF6_CONFIG=lhapdf-config
LHAPDF6_BIN=/cvmfs/sft.cern.ch/lcg/releases/MCGenerators/lhapdf/6.2.3-752bc/x86_64-centos7-gcc8-opt/bin/
LHAPDF6_INCLUDE=-I/cvmfs/sft.cern.ch/lcg/releases/MCGenerators/lhapdf/6.2.3-752bc/x86_64-centos7-gcc8-opt/include
LHAPDF6_LIB=-L/cvmfs/sft.cern.ch/lcg/releases/MCGenerators/lhapdf/6.2.3-752bc/x86_64-centos7-gcc8-opt/lib -Wl,-rpath,/cvmfs/sft.cern.ch/lcg/releases/MCGenerators/lhapdf/6.2.3-752bc/x86_64-centos7-gcc8-opt/lib -lLHAPDF

POWHEG_USE=false
POWHEG_CONFIG=lhapdf-config
POWHEG_BIN=
POWHEG_INCLUDE=
POWHEG_LIB=

RIVET_USE=false
RIVET_CONFIG=lhapdf-config
RIVET_BIN=
RIVET_INCLUDE=
RIVET_LIB=

ROOT_USE=false
ROOT_CONFIG=lhapdf-config
ROOT_BIN=
ROOT_INCLUDE=
ROOT_LIB=

YODA_USE=false
YODA_CONFIG=lhapdf-config
YODA_BIN=
YODA_INCLUDE=
YODA_LIB=

GZIP_USE=false
GZIP_CONFIG=lhapdf-config
GZIP_BIN=
GZIP_INCLUDE=
GZIP_LIB=

PYTHON_USE=false
PYTHON_CONFIG=lhapdf-config
PYTHON_BIN=
PYTHON_INCLUDE=
PYTHON_LIB=

MG5MES_USE=false
MG5MES_CONFIG=lhapdf-config
MG5MES_BIN=
MG5MES_INCLUDE=
MG5MES_LIB=

OPENMP_USE=false
OPENMP_CONFIG=lhapdf-config
OPENMP_BIN=
OPENMP_INCLUDE=
OPENMP_LIB=
