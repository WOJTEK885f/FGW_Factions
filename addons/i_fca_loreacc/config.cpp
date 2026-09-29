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
            "A3_Characters_F",                  // Base unit class (I_Soldier_F, Head_Euro)
            "A3_Characters_F_Enoch",            // Base: Head_Russian, Head_Enoch; Bohdan: LivonianHead_7; Ostap: WhiteHead_04
            "A3_Characters_F_Heads",            // Face models (Man_A3); Stepan: GreekHead_A3_03
            "A3_Dubbing_Radio_F_Enoch",         // Base identity class: Language (LanguageRUS_F); Bohdan: Male01RUS, Ostap: Male02RUS, Stepan: Male03RUS
            "A3_Weapons_F_LongRangeRifles_EBR", // Rifleman: srifle_EBR_F
            "CUP_Creatures_Military_Russia", // ShockTroop: CUP_H_RUS_Altyn_Shield_Up_black; Rifleman: CUP_H_RUS_K6_3
            "CUP_Creatures_Military_USArmy", // Bohdan: CUP_V_B_Interceptor_Base_Coyote; Stepan: CUP_V_B_Interceptor_Base_M81; Grenadier: CUP_V_B_Interceptor_Grenadier_M81; Ostap: CUP_V_B_Interceptor_Rifleman_M81
            "CUP_Creatures_Military_USMC",   // ShockTroop: CUP_V_CPC_lightbelt_rngr
            "CUP_Dubbing_Radio_RU_c",        // Base identity class: Language (CUP_D_Language_RU)
            "CUP_Weapons_ACR",        // Grenadier: CUP_arifle_ACR_blk_556
            "CUP_Weapons_AK",         // Ostap: CUP_arifle_AKM_top_rail; Bohdan, Militia: CUP_arifle_AKS74U_top_rail
            "CUP_Weapons_Ammunition", // Multiple units - Ammo
            "CUP_Weapons_Grenades",   // Grenadier, Militia, Rifleman, ShockTroop: CUP_HandGrenade_RGD5
            "CUP_Weapons_M240",       // ShockTroop: CUP_lmg_FNMAG_RIS_modern
            "CUP_Weapons_NVG",        // Grenadier: CUP_NVG_PVS7
            "CUP_Weapons_SPAS12",     // Stepan: CUP_sgun_SPAS12
            "CUP_Weapons_TT",         // Grenadier: CUP_hgun_TT
            "cfp_headgear", // Grenadier: SP_PASGTHelmet_Black1
            "CFP_O_RUMVD",  // Militia, Rifleman: CFP_V_O_RUMVD_SURPAT
            "rhsgref_c_troops",  // Militia: rhsgref_patrolcap_specter
            "rhsgref_c_weapons", // Grenadier: rhs_panzerfaust60_mag, rhs_weap_panzerfaust60
            "USP_Gear_Body",     // Grenadier, Militia, Rifleman, ShockTroop: USP_G3F_AOR2; Bohdan: USP_RUGBY_G3C_CBR_MPW; Ostap, Stepan: USP_RUGBY_G3C_RGR_AOR2
            "USP_Gear_Face"      // Grenadier: USP_FM12_BLK2; Ostap: USP_BEARD_MS_BLK5
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
