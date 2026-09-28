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
            "gr7bow_fgwf_b_player_loreacc", // FGWF_B_Player_ArmedEscortGuard_M1A1, FGWF_B_Player_Base
            "gr7bow_fgwf_o_atov_loreacc",   // FGWF_O_Atov_Base, FGWF_O_Atov_Scout
            "CUP_Weapons_Ammunition", // CUP_17Rnd_9x19_M17_Black, CUP_6Rnd_45ACP_M
            "CUP_Weapons_Grenades",   // CUP_HandGrenade_RGD5
            "CUP_Weapons_M17",        // CUP_hgun_M17_Black
            "CUP_Weapons_Revolver",   // CUP_hgun_TaurusTracker455
            "rhsgref_c_weapons", // rhs_panzerfaust60_mag, rhs_weap_panzerfaust60
            "sp_fwa_thompson"    // sp_fwa_30Rnd_45acp_thompson_m1a1, sp_fwa_smg_thompson_m1a1
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"
