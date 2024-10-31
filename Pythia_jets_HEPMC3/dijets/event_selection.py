import sys

import numpy as np
import pyhepmc

sys.path.append("./dijets")
import argparse

from jet_selection import get_jets, get_jets_eta

arg_parser = argparse.ArgumentParser()
arg_parser.add_argument("--in_file", help="HepMC input ascii file", type=str)
arg_parser.add_argument("--pt_jet_min_gev", help="minimum jet pt", type=float)
arg_parser.add_argument(
    "--eta_abs_jet_max", help="maximum jet pseudorapidity", type=float
)
arg_parser.add_argument(
    "--dR_jets_akt", help="DeltaR parameter for anti-kt jet clustering", type=float
)


def select_events(
    in_file_name,
    pt_jet_min_gev,
    eta_abs_jet_max,
    dR_jets_akt,
    n_max_events=-1,
):
    """
    Select jet events according to the provided jet cuts + require that no jets are overlapping,
    write selected events to file,
    return a boolean mask indicating the selected events.

    Write n_max_events at most. Default -1: write all events after the selection.
    """

    in_file = pyhepmc.open(in_file_name)

    event_selection_mask = []

    for i_event, event in enumerate(in_file):
        if i_event and i_event % 1000 == 0:
            print("Analysing event", i_event)

        event_selection_mask.append(False)
        jets = get_jets(event, pt_jet_min_gev, eta_abs_jet_max, dR_jets_akt)
        if not len(jets):
            continue

        jets_eta = get_jets_eta(jets)
        jets_phi = np.arctan2(jets.py, jets.px)
        disjoint_jets = True
        i_jet = 0
        while i_jet <= len(jets) - 2 and disjoint_jets:
            j_jet = i_jet + 1
            while j_jet < len(jets) and disjoint_jets:
                phi_i = jets_phi[i_jet]
                phi_j = jets_phi[j_jet]
                if phi_i < 0.0:
                    phi_i += 2 + np.pi
                if phi_j < 0.0:
                    phi_j += 2 + np.pi
                if (jets_eta[i_jet] - jets_eta[j_jet]) ** 2 + (
                    phi_i - phi_j
                ) ** 2 < 4.0 * dR_jets_akt**2:
                    disjoint_jets = False
                j_jet += 1
            i_jet += 1

        if not disjoint_jets:
            continue

        event_selection_mask[-1] = True
        if n_max_events > -1 and np.sum(event_selection_mask) == n_max_events:
            break

    return event_selection_mask


# ----------------------------------------------------------------------------------------------------


def main():
    args = arg_parser.parse_args()

    select_events(
        args.in_file,
        args.pt_jet_min_gev,
        args.eta_abs_jet_max,
        args.dR_jets_akt,
    )


# ----------------------------------------------------------------------------------------------------

if __name__ == "__main__":
    main()
