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
            "gr7bow_fgwf_uniforms",             // FGWF_U_C_Worker_02, FGWF_U_USMC_MCCUU_MARPAT_M81
            "gr7bow_fgwf_vests",                // FGWF_V_Flak_Vest_Vydra_3M
            "A3_Characters_F",                  // G_Bandanna_blk, G_Bandanna_khk, G_Bandanna_oli, Head_Female, I_Soldier_F
            "A3_Characters_F_Enoch",            // Head_Enoch, Head_Russian, WhiteHead_01
            "A3_Characters_F_Heads",            // Man_A3
            "A3_Dubbing_Radio_F_Enoch",         // LanguageRUS_F
            "A3_Weapons_F_LongRangeRifles_EBR", // srifle_EBR_F
            "CUP_Creatures_Military_FR",            // CUP_H_FR_BandanaWdl
            "CUP_Creatures_Military_PMC",           // CUP_I_B_PMC_Unit_11, CUP_I_B_PMC_Unit_15, CUP_I_B_PMC_Unit_2, CUP_I_B_PMC_Unit_43, CUP_V_PMC_CIRAS_Coyote_Empty
            "CUP_Creatures_Military_Russia",        // CUP_H_RUS_K6_3
            "CUP_Creatures_Military_SLA",           // CUP_H_SLA_Helmet_URB_worn
            "CUP_Creatures_Military_USArmy",        // CUP_H_USArmy_Helmet_M1_plain_M81, CUP_H_USArmy_Helmet_Protec, CUP_V_B_Interceptor_Rifleman_M81
            "CUP_Creatures_People_Civil_Chernarus", // CUP_V_C_Police_Holster
            "CUP_Dubbing_Radio_RU_c",              // Base: CUP_D_Language_RU
            "CUP_Weapons_Ammunition",               // CUP_10Rnd_762x39_SaigaMk03_M, CUP_17Rnd_9x19_M17_Black, CUP_20Rnd_762x51_DMR, CUP_30Rnd_45ACP_M3A1_BLK_M, CUP_30Rnd_9x19_EVO, CUP_7Rnd_50AE_Deagle
            "CUP_Weapons_Deagle",                   // CUP_hgun_Deagle
            "CUP_Weapons_EVO",                      // CUP_smg_EVO
            "CUP_Weapons_Grenades",                 // CUP_HandGrenade_RGD5
            "CUP_Weapons_M14",                      // CUP_srifle_M14
            "CUP_Weapons_M17",                      // CUP_hgun_M17_Black
            "CUP_Weapons_M3A1",                     // CUP_smg_M3A1_blk
            "CUP_Weapons_Saiga",                    // CUP_arifle_SAIGA_MK03
            "cfp_headgear", // CFP_BoonieHat_M81, SP_Bandana_Black, SP_BoonieHat_Tan
            "cfp_uniforms", // CFP_GUER_M81, CFP_GUER_M81Tee
            "cfp_vests",    // CFP_RAV_Empty_Green, CFP_Tactical1_M81
            "rhsgref_c_weapons", // rhs_panzerfaust60_mag, rhs_weap_panzerfaust60
            "rhsusf_c_radio",    // rhs_Female01ENG
            "USP_Gear_Body"      // USP_RUGBY_G3C_RGR_MPW
        };
        units[] = {
            "FGWF_I_CFR_Fighter",
            "FGWF_I_CFR_Grenadier",
            "FGWF_I_CFR_DM",
            "FGWF_I_CFR_MilitiaRifleman_Light",
            "FGWF_I_CFR_MilitiaRifleman_OldHelmet",
            "FGWF_I_CFR_MilitiaRifleman_SteelHelmet",
            "FGWF_I_CFR_MilitiaRifleman_BikeHelmet",
            "FGWF_I_CFR_MilitiaSMGFighter",
            "FGWF_I_CFR_MilitiaSniper",
            "FGWF_I_CFR_MaleVillager",
            "FGWF_I_CFR_Companion_Olga"
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
