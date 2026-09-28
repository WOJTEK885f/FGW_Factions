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
            "CUP_Weapons_AWM",              // CUP_muzzle_snds_AWM, CUP_srifle_AWM_blk, CUP_srifle_G22_wdl
            "CUP_Weapons_West_Attachments"  // CUP_optic_LeupoldMk4
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
