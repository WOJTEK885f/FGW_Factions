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
            "gr7bow_fgwf_uniforms",     // FGWF_U_PMC_Unit_31
            "gr7bow_fgwf_vests",        // FGWF_V_Flak_Vest_Vydra_3M
            "gr7bow_fgwf_weapons",      // FGWF_srifle_G22_wdl_sd_lmk4
            "A3_Characters_F",          // Head_NATO, O_Soldier_F
            "A3_Characters_F_Enoch",    // LivonianHead_5, WhiteHead_04
            "A3_Characters_F_Heads",    // Man_A3
            "A3_Dubbing_Radio_F",       // LanguageENG_F, Male01ENG, Male02ENG
            "A3_Weapons_F_SMGs_SMG_01", // SMG_01_F
            "CUP_Creatures_Military_Germany", // CUP_V_B_JPC_Black_Light
            "CUP_Creatures_Military_Russia",  // CUP_V_RUS_6B3_4
            "CUP_Creatures_Military_SLA",     // CUP_H_SLA_Helmet_URB_worn
            "CUP_Creatures_Military_USArmy",  // CUP_H_USArmy_Helmet_Protec
            "CUP_Weapons_Ammunition",         // CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M, CUP_30Rnd_556x45_Stanag, CUP_5Rnd_762x67_G22, CUP_7Rnd_50AE_Deagle
            "CUP_Weapons_Deagle",             // CUP_hgun_Deagle
            "CUP_Weapons_Grenades",           // CUP_HandGrenade_RGD5
            "CUP_Weapons_M240",               // CUP_lmg_FNMAG_RIS_modern
            "CUP_Weapons_M4",                 // CUP_arifle_HK416_Black
            "CUP_Weapons_NVG",                // CUP_NVG_PVS7
            "cfp_headgear", // CFP_OPS2017_Helmet_Grey, SP_PASGTHelmet_Black1
            "cfp_uniforms", // CFP_GUER_PolyDesert
            "cfp_vests",    // CFP_RAV_Empty_Green, CFP_Tactical1_M81, SP_Tactical1_Black
            "rhsgref_c_weapons", // rhs_panzerfaust60_mag, rhs_weap_panzerfaust60
            "USP_Gear_Body",     // USP_RUGBY_G3C_BLK_MPW
            "USP_Gear_Face"      // USP_BEARD_BRN6, USP_SOTR
        };
        units[] = {
            "FGWF_O_Alpha_SpecialForce",
            "FGWF_O_Alpha_EliteSniper",
            "FGWF_O_Alpha_EliteStormtrooper",
            "FGWF_O_Alpha_EliteScout",
            "FGWF_O_Alpha_Companion_Volodimir",
            "FGWF_O_Alpha_Companion_Igor"
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
