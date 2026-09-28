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
            "gr7bow_fgwf_b_player_loreacc", // Armed Escort Guard base class
            "gr7bow_fgwf_o_atov_loreacc",   // Atov Scout base class
            "CUP_Weapons_WeaponsCore", // M17 and TaurusTracker455 pistols, 9x19 and .45 magazines
            "CUP_Weapons_Grenades",    // RGD5 grenades
            "rhsgref_c_weapons", // Panzerfaust 60
            "sp_fwa_thompson"    // Thompson SMG
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"
