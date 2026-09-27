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
            "A3_Characters_F", // C_Marshal_F, U_Marshal, Uniform_Base
            "A3_Weapons_F",    // ItemCore, UniformItem
            "CUP_Creatures_Military_PMC",          // PMC uniforms
            "CUP_Creatures_Military_USMC",         // FROG3 + MCCUU uniforms
            "CUP_Creatures_People_Civil_Chernarus" // Worker 02 uniform
        };
        units[] = {};
        weapons[] = {
            "FGWF_U_C_Worker_02",
            "FGWF_U_Marshal",
            "FGWF_U_PMC_Unit_1",
            "FGWF_U_PMC_Unit_31",
            "FGWF_U_PMC_Unit_35",
            "FGWF_U_USMC_FROG3_WMARPAT",
            "FGWF_U_USMC_MCCUU_M81_MARPAT_roll_2",
            "FGWF_U_USMC_MCCUU_MARPAT_M81"
        };
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
