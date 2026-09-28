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
            "A3_Characters_F",                  // GreekHead_A3_03, Head_Euro, I_Soldier_F
            "A3_Characters_F_Enoch",            // Head_Enoch, Head_Russian, LivonianHead_7, WhiteHead_04
            "A3_Characters_F_Heads",            // Man_A3
            "A3_Dubbing_Radio_F_Enoch",         // LanguageRUS, Male01RUS, Male02RUS, Male03RUS
            "A3_Weapons_F_LongRangeRifles_EBR", // srifle_EBR_F
            "CUP_Creatures_Military_Russia", // CUP_H_RUS_Altyn_Shield_Up_black, CUP_H_RUS_K6_3
            "CUP_Creatures_Military_USArmy", // CUP_V_B_Interceptor_Base_Coyote, CUP_V_B_Interceptor_Base_M81, CUP_V_B_Interceptor_Grenadier_M81, CUP_V_B_Interceptor_Rifleman_M81
            "CUP_Creatures_Military_USMC",   // CUP_V_CPC_lightbelt_rngr
            "CUP_Weapons_ACR",               // CUP_arifle_ACR_blk_556
            "CUP_Weapons_AK",                // CUP_arifle_AKM_top_rail, CUP_arifle_AKS74U_top_rail
            "CUP_Weapons_Ammunition",        // CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M, CUP_20Rnd_762x51_DMR, CUP_30Rnd_545x39_AK74M_M, CUP_30Rnd_556x45_Stanag, CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M, CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M, CUP_8Rnd_12Gauge_Pellets_No00_Buck, CUP_8Rnd_12Gauge_Slug, CUP_8Rnd_762x25_TT
            "CUP_Weapons_Grenades",          // CUP_HandGrenade_RGD5
            "CUP_Weapons_M240",              // CUP_lmg_FNMAG_RIS_modern
            "CUP_Weapons_NVG",               // CUP_NVG_PVS7
            "CUP_Weapons_SPAS12",            // CUP_sgun_SPAS12
            "CUP_Weapons_TT",                // CUP_hgun_TT
            "cfp_headgear", // SP_PASGTHelmet_Black1
            "CFP_O_RUMVD",  // CFP_V_O_RUMVD_SURPAT
            "rhsgref_c_troops",  // rhsgref_patrolcap_specter
            "rhsgref_c_weapons", // rhs_panzerfaust60_mag, rhs_weap_panzerfaust60
            "USP_Gear_Body",     // USP_G3F_AOR2, USP_RUGBY_G3C_CBR_MPW, USP_RUGBY_G3C_RGR_AOR2
            "USP_Gear_Face"      // USP_BEARD_MS_BLK5, USP_FM12_BLK2
        };
        units[] = {
            "FGWF_I_FCA_Militia",
            "FGWF_I_FCA_Rifleman",
            "FGWF_I_FCA_Grenadier",
            "FGWF_I_FCA_ShockTroop",
            "FGWF_I_FCA_Companion_Ostap",
            "FGWF_I_FCA_Companion_Stepan",
            "FGWF_I_FCA_Companion_Bohdan"
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"

#include "CfgIdentities.hpp"
#include "CfgFaces.hpp"

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
