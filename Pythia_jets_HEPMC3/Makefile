FLAGS  = -Wall -W -O3
FLAGS += $(shell root-config --cflags)
FLAGS += -I$(PYTHIA8_HOME)/include -I$(HEPMC_HOME)/include
FLAGS += $(shell root-config --libs)
FLAGS += -L$(PYTHIA8_HOME)/lib -L$(HEPMC_HOME)/lib -lpythia8 -lHepMC3 -lHepMC3rootIO
%FLAGS += $(shell /cvmfs/sft.cern.ch/lcg/releases/LCG_96b/fastjet/3.3.2/x86_64-centos7-gcc8-opt/bin/fastjet-config --cxxflags --libs --plugins)

SRC = $(wildcard *.cc)
BIN = $(SRC:%.cc=%)

all: $(BIN)

%: %.cc
	g++ $< -o $@ $(FLAGS)

clean:
	rm -f $(BIN)

