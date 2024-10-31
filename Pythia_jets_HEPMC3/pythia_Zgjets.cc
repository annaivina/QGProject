#include "Pythia8/Pythia.h"
#include "Pythia8Plugins/HepMC3.h"

#include "HepMC3/GenEvent.h"
#include "HepMC3/WriterRootTree.h"

#include <string>
#include <iostream>

using namespace Pythia8;
using namespace HepMC3;
using namespace std;

int main(int argc, char** argv) {

    if( argc < 3 ) {
        cout << "Usage: " << argv[0] << " <random number seed> <number of events>" << endl;
        exit(-1);
    }

    Pythia pythia;

    pythia.readString("Beams:idA = 2212");
    pythia.readString("Beams:idB = 2212");
    pythia.readString("Beams:eCM = 13000.");
    pythia.readString("WeakBosonAndParton:qqbar2gmZg = on");
    pythia.readString("WeakZ0:gmZmode = 2");
    pythia.readString("PhaseSpace:pTHatMin = 100.");

    // Z boson decays invisibly
    pythia.readString("23:onMode = off");
    pythia.readString("23:onIfAny = 12 14 16"); // Enable decays to neutrinos
    //pythia.readString("23:mMin = 70.");
    //pythia.readString("23:mMax = 120.");



    // Underlying event and hadronization
    pythia.readString("PartonLevel:MPI = on");
    pythia.readString("HadronLevel:Hadronize = on");



    pythia.readString( "Random:setSeed = on" );
    string rndSeedString  = "Random:seed = ";
    rndSeedString        += argv[1];
    pythia.readString( rndSeedString.c_str() );

    pythia.init();

    string outfile_name = "/storage/agrp/annai/QURK-GLUON/samples_produce/Pythia_Zgjets/500GeVjets/pythia_Zg_pT500_Seed";
    outfile_name  += argv[1];
    outfile_name  += ".root";
    WriterRootTree  root_output( outfile_name );
    Pythia8ToHepMC3 pythiaToHepMC;

    int n_events = atoi( argv[2] );

    for ( int i_event = 0; i_event < n_events; ++i_event ) {

	if ( !pythia.next() )
	    continue;

	GenEvent evt( Units::GEV, Units::MM );
	pythiaToHepMC.fill_next_event(pythia.event, &evt, -1, &pythia.info);
	evt.set_units( Units::MEV, Units::MM ); // don't trust the pythia8 plugin when it comes to GeV vs. MeV

	root_output.write_event(evt);
	// output_file.write_event(evt);

  }

  root_output.close();
    cout << "Stored events in "
	 << outfile_name << endl;

    return 0;

}
