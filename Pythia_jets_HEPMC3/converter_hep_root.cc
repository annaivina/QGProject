// -*- C++ -*-
//
// This file is part of HepMC
// Copyright (C) 2014-2023 The HepMC collaboration (see AUTHORS for details)
//
/**
 *  @file rootIOTree_example_write.cc
 *  @brief Basic example of use of root I/O with tree: writing events to file
 *
 *  @author Original authors: Witold Pokorski/Andrii Verbytskyi
 *          Modified by: [Your Name]
 *  @date   [Modification Date]
 */
#include "HepMC3/GenEvent.h"
#include "HepMC3/WriterRootTree.h"
#include "HepMC3/ReaderAscii.h"
#include "HepMC3/Print.h"

#include <iostream>

using namespace HepMC3;

/** Main */
int main(int argc, char **argv) {

    if( argc<3 ) {
        std::cout << "Usage: " << argv[0] << " <input_hepmc3_file> <output_root_file>" << std::endl;
        exit(-1);
    }

    ReaderAscii text_input(argv[1]);
    WriterRootTree root_output(argv[2]);

    int events_written = 0;

    while( !text_input.failed() ) {

        GenEvent evt;

        text_input.read_event(evt);

        if( text_input.failed() ) break;

        if( events_written == 0 ) {
            std::cout << "First event: " << std::endl;
            Print::listing(evt);
        }

        root_output.write_event(evt);
        ++events_written;

        if( events_written % 1000 == 0 ) {
            std::cout << "Event: " << events_written << std::endl;
        }
    }

    text_input.close();
    root_output.close();

    std::cout << "Events read and written: " << events_written << std::endl;

    return 0;
}
