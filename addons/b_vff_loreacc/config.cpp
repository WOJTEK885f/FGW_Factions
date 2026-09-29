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
            "gr7bow_fgwf_vests",     // FemaleCivilianFighter, Oksana, Victoria: FGWF_V_Flak_Vest_Vydra_3M
            "A3_Characters_F",       // Base unit class (B_Soldier_F, Head_Female); FemaleCivilianFighter: H_Bandanna_sgg
            "A3_Characters_F_Enoch", // Oksana, Victoria: WhiteHead_01
            "A3_Characters_F_Heads", // Face models (Man_A3)
            "CUP_Creatures_Military_PMC",    // FemaleCivilianFighter, FemaleCivilianFighterCaptain: CUP_I_B_PMC_Unit_1; FemaleCivilianFighterCaptain: CUP_V_PMC_CIRAS_Black_Empty
            "CUP_Creatures_Military_Russia", // Marine: CUP_H_RUS_Altyn_Shield_Up_black; FemaleCivilianFighterCaptain: CUP_H_RUS_K6_3
            "CUP_Creatures_Military_USArmy", // SpecialPolice: CUP_H_USArmy_Helmet_M1_plain_M81; Marine: CUP_V_B_Interceptor_Base_Coyote; Fighter: CUP_V_B_Interceptor_Rifleman_M81
            "CUP_Weapons_AA12",       // SpecialPolice: CUP_sgun_AA12
            "CUP_Weapons_Ammunition", // Multiple units - Ammo
            "CUP_Weapons_Colt1911",   // FemaleCivilianFighterCaptain, SpecialPolice: CUP_hgun_Colt1911
            "CUP_Weapons_Grenades",   // Fighter, SpecialPolice: CUP_HandGrenade_RGD5
            "CUP_Weapons_HK416",      // Fighter, Oksana: CUP_arifle_HK416_Black
            "CUP_Weapons_M16",        // Marine, Victoria: CUP_arifle_M16A4_Base
            "CUP_Weapons_M9",         // Victoria: CUP_hgun_M9A1
            "CUP_Weapons_NVG",        // Fighter: CUP_NVG_PVS7
            "cfp_headgear", // Fighter: CFP_PASGTHelmet_M812
            "cfp_uniforms", // SpecialPolice, Victoria: CFP_GUER_M81Tee; Oksana: CFP_GUER_TanTee
            "cfp_vests",    // SpecialPolice: CFP_Tactical1_M81
            "rhsusf_c_radio",   // Oksana, Victoria: rhs_Female01ENG
            "rhsusf_c_weapons", // FemaleCivilianFighter, FemaleCivilianFighterCaptain: rhs_weap_M590_5RD, rhsusf_5Rnd_00Buck, rhsusf_5Rnd_Slug
            "USP_Gear_Body"     // Fighter, Marine: USP_G3C_CU_M81
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
