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
            "gr7bow_fgwf_vests",     // FGWF_V_Flak_Vest_Vydra_3M
            "A3_Characters_F",       // B_Soldier_F, H_Bandanna_sgg, Head_Female
            "A3_Characters_F_Enoch", // WhiteHead_01
            "A3_Characters_F_Heads", // Man_A3
            "CUP_Creatures_Military_PMC",    // CUP_I_B_PMC_Unit_1, CUP_V_PMC_CIRAS_Black_Empty
            "CUP_Creatures_Military_Russia", // CUP_H_RUS_Altyn_Shield_Up_black, CUP_H_RUS_K6_3
            "CUP_Creatures_Military_USArmy", // CUP_H_USArmy_Helmet_M1_plain_M81, CUP_V_B_Interceptor_Base_Coyote, CUP_V_B_Interceptor_Rifleman_M81
            "CUP_Weapons_AA12",              // CUP_sgun_AA12
            "CUP_Weapons_Ammunition",        // CUP_15Rnd_9x19_M9, CUP_20Rnd_B_AA12_Buck_00, CUP_20Rnd_B_AA12_Slug, CUP_30Rnd_556x45_Stanag, CUP_7Rnd_45ACP_1911
            "CUP_Weapons_Colt1911",          // CUP_hgun_Colt1911
            "CUP_Weapons_Grenades",          // CUP_HandGrenade_RGD5
            "CUP_Weapons_M4",                // CUP_arifle_HK416_Black, CUP_arifle_M16A4_Base
            "CUP_Weapons_M9",                // CUP_hgun_M9A1
            "CUP_Weapons_NVG",               // CUP_NVG_PVS7
            "cfp_headgear", // CFP_PASGTHelmet_M812
            "cfp_uniforms", // CFP_GUER_M81Tee, CFP_GUER_TanTee
            "cfp_vests",    // CFP_Tactical1_M81
            "rhsusf_c_radio",   // rhs_Female01ENG
            "rhsusf_c_weapons", // rhs_weap_M590_5RD, rhsusf_5Rnd_00Buck, rhsusf_5Rnd_Slug
            "USP_Gear_Body"     // USP_G3C_CU_M81
        };
        units[] = {
            "FGWF_B_VFF_FemaleCivilianFighter",
            "FGWF_B_VFF_FemaleCivilianFighterCaptain",
            "FGWF_B_VFF_Fighter",
            "FGWF_B_VFF_Marine",
            "FGWF_B_VFF_SpecialPolice",
            "FGWF_B_VFF_Companion_Victoria",
            "FGWF_B_VFF_Companion_Oksana"
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
