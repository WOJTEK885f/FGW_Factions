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
            "CUP_Weapons_WeaponsCore", // Leupold Mk4 scope
            "CUP_Weapons_AWM"          // AWM, G22, G22 mags, AWM suppressor
        };
        units[] = {};
        weapons[] = {
            "FGWF_srifle_AWM_blk_sd",
            "FGWF_srifle_G22_wdl_sd_lmk4"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
