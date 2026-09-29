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
            "gr7bow_fgwf_vests",                // Denis, Tatyana: FGWF_V_Flak_Vest_Vydra_3M
            "A3_Characters_F",                  // Base unit class (B_Soldier_F, Head_Euro)
            "A3_Characters_F_Enoch",            // Base: Head_Russian, Head_Enoch; Yuriy: LivonianHead_10; Denis: LivonianHead_3; Tatyana: WhiteHead_01; Roman: WhiteHead_31
            "A3_Characters_F_Heads",            // Face models (Man_A3)
            "A3_Dubbing_Radio_F_Enoch",         // Base identity class: Language (LanguageRUS_F); Denis: Male01RUS, Yuriy: Male02RUS, Roman: Male03RUS
            "A3_Weapons_F_LongRangeRifles_EBR", // Tatyana: srifle_EBR_F
            "CUP_Creatures_Military_CDF",    // SniperElite: CUP_V_CDF_OfficerBelt
            "CUP_Creatures_Military_Russia", // Fighter: CUP_RUS_Balaclava_blk
            "CUP_Creatures_Military_USMC",   // Yuriy: CUP_U_B_USMC_MCCUU_MARPAT_M81; Tatyana: CUP_U_B_USMC_MCCUU_M81_MARPAT_roll_2; Commando: CUP_V_CPC_Fastbelt_rngr
            "CUP_Dubbing_Radio_RU_c",        // Base identity class: Language (CUP_D_Language_RU)
            "CUP_Weapons_AK",         // Yuriy: CUP_arifle_AKS74U_top_rail; Fighter: CUP_arifle_SAIGA_MK03
            "CUP_Weapons_Ammunition", // Multiple units - Ammo
            "CUP_Weapons_Grenades",   // Commando, Fighter: CUP_HandGrenade_RGD5
            "CUP_Weapons_M16",        // Denis: CUP_arifle_M16A4_Base; Commando: CUP_arifle_M4A3_black
            "CUP_Weapons_M9",         // Denis: CUP_hgun_M9A1
            "CUP_Weapons_NVG",        // Commando, SniperElite: CUP_NVG_PVS7
            "CUP_Weapons_SVD",        // Roman, SniperElite: CUP_srifle_SVD_pso
            "cfp_headgear", // SniperElite: SP_BoonieHat_Tan; Commando: SP_PASGTHelmet_Black1
            "cfp_uniforms", // Denis: CFP_GUER_M81Tee
            "cfp_vests",    // Yuriy: CFP_Tactical1_M81; Fighter, Roman: SP_Tactical1_Tan
            "rhsusf_c_radio", // Tatyana: rhs_Female01ENG
            "USP_Gear_Body",  // Fighter, SniperElite: USP_G3F_AOR1; Commando, Roman: USP_RUGBY_G3C_RGR_AOR1
            "USP_Gear_Face"   // Roman: USP_BEARD_BRN2; Yuriy: USP_BEARD_CH_MS_BLK2
        };
        units[] = {
            "FGWF_B_Pozna_Fighter",
            "FGWF_B_Pozna_Commando",
            "FGWF_B_Pozna_SniperElite",
            "FGWF_B_Pozna_Companion_Roman",
            "FGWF_B_Pozna_Companion_Yuriy",
            "FGWF_B_Pozna_Companion_Denis",
            "FGWF_B_Pozna_Companion_Tatyana"
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
