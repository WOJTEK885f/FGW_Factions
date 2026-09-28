#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"WOJTEK885"};
        url = ECSTRING(main,url);
        name = QUOTE(COMPONENT);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "gr7bow_fgwf_main",
            "gr7bow_fgwf_b_player_loreacc", // Regular unit identity overrides
            "gr7bow_fgwf_b_pozna_loreacc",  // Companion identity overrides (Tatyana)
            "gr7bow_fgwf_b_vff_loreacc",    // Regular unit and companion identity overrides (Oksana, Victoria)
            "gr7bow_fgwf_i_cfr_loreacc",    // Companion identity overrides (Olga)
            "A3_Characters_F",              // B_Soldier_F, Man_A3, G_CIVIL_female
            "zee_FiftyShadesOfFemale"  // FSOF female face classes
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgIdentities.hpp"
#include "CfgFaces.hpp"
#include "CfgVehicles.hpp"
