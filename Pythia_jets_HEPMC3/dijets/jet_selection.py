import awkward as aka
import fastjet
import numpy as np


def get_jets_eta(jets):
    jets_theta = np.arccos(
        jets.pz / np.sqrt(jets.px**2 + jets.py**2 + jets.pz**2)
    )
    jets_eta = -np.log(np.tan(0.5 * jets_theta))
    return jets_eta


def get_jets(event, pt_min_gev, eta_abs_max, dR=0.4):
    jetdef = fastjet.JetDefinition(fastjet.antikt_algorithm, dR)

    particles = event.particles
    final_state_indices = np.where( [ p.status == 1 for p in particles ] )[0]
    n_final_state = final_state_indices.shape[0]
    constituents_np = np.zeros(
        n_final_state,
        dtype={
            "names": ("px", "py", "pz", "E"),
            "formats": (float, float, float, float),
        },
    )
    constituents_np["px"] = [ particles[i].momentum.px for i in final_state_indices ]
    constituents_np["py"] = [ particles[i].momentum.py for i in final_state_indices ]
    constituents_np["pz"] = [ particles[i].momentum.pz for i in final_state_indices ]
    constituents_np["E"]  = [ particles[i].momentum.e for i in final_state_indices ]
    constituents_aka = aka.from_numpy(constituents_np)
    
    clusters = fastjet.ClusterSequence(constituents_aka, jetdef)
    jets = clusters.inclusive_jets(pt_min_gev)    
    jet_eta = get_jets_eta(jets)

    return jets[np.abs(jet_eta) < eta_abs_max]
