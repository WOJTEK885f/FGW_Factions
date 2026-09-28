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
            "gr7bow_fgwf_uniforms",             // MaleVillager: FGWF_U_C_Worker_02; MilitiaSMGFighter: FGWF_U_USMC_MCCUU_MARPAT_M81
            "gr7bow_fgwf_vests",                // DM, MilitiaRifleman_BikeHelmet, MilitiaRifleman_Light, MilitiaRifleman_OldHelmet, MilitiaRifleman_SteelHelmet: FGWF_V_Flak_Vest_Vydra_3M
            "A3_Characters_F",                  // Base class (I_Soldier_F, Head_Russian); Olga: Head_Female; Grenadier, MilitiaRifleman_BikeHelmet, MilitiaRifleman_Light, MilitiaRifleman_OldHelmet, MilitiaRifleman_SteelHelmet: G_Bandanna_blk; MilitiaSniper: G_Bandanna_khk; Fighter, MilitiaSMGFighter: G_Bandanna_oli
            "A3_Characters_F_Enoch",            // Base: Head_Enoch; Olga: WhiteHead_01
            "A3_Characters_F_Heads",            // Face models (Man_A3)
            "A3_Dubbing_Radio_F_Enoch",         // Base identity: LanguageRUS_F
            "A3_Weapons_F_LongRangeRifles_EBR", // DM: srifle_EBR_F
            "CUP_Creatures_Military_FR",            // DM: CUP_H_FR_BandanaWdl
            "CUP_Creatures_Military_PMC",           // MilitiaRifleman_Light: CUP_I_B_PMC_Unit_11; MilitiaRifleman_BikeHelmet: CUP_I_B_PMC_Unit_15; MilitiaRifleman_OldHelmet: CUP_I_B_PMC_Unit_2; MilitiaRifleman_SteelHelmet: CUP_I_B_PMC_Unit_43; MilitiaSniper: CUP_V_PMC_CIRAS_Coyote_Empty
            "CUP_Creatures_Military_Russia",        // MilitiaRifleman_SteelHelmet: CUP_H_RUS_K6_3
            "CUP_Creatures_Military_SLA",           // Grenadier, MilitiaRifleman_OldHelmet: CUP_H_SLA_Helmet_URB_worn
            "CUP_Creatures_Military_USArmy",        // Fighter: CUP_H_USArmy_Helmet_M1_plain_M81; MilitiaRifleman_BikeHelmet: CUP_H_USArmy_Helmet_Protec; Grenadier: CUP_V_B_Interceptor_Rifleman_M81
            "CUP_Creatures_People_Civil_Chernarus", // MaleVillager, Olga: CUP_V_C_Police_Holster
            "CUP_Dubbing_Radio_RU_c",               // Base identity: CUP_D_Language_RU
            "CUP_Weapons_Ammunition", // All units - Ammo
            "CUP_Weapons_Deagle",     // DM: CUP_hgun_Deagle
            "CUP_Weapons_EVO",        // MilitiaSMGFighter: CUP_smg_EVO
            "CUP_Weapons_Grenades",   // DM, Grenadier, MilitiaSMGFighter: CUP_HandGrenade_RGD5
            "CUP_Weapons_M14",        // MaleVillager, MilitiaRifleman_Light, MilitiaSniper: CUP_srifle_M14
            "CUP_Weapons_M17",        // MilitiaSniper: CUP_hgun_M17_Black
            "CUP_Weapons_M3A1",       // Grenadier: CUP_smg_M3A1_blk
            "CUP_Weapons_Saiga",      // Fighter, Olga: CUP_arifle_SAIGA_MK03
            "cfp_headgear", // MilitiaSniper: CFP_BoonieHat_M81; MilitiaSMGFighter: SP_Bandana_Black; MaleVillager: SP_BoonieHat_Tan
            "cfp_uniforms", // DM, Grenadier, MilitiaSniper: CFP_GUER_M81; Fighter: CFP_GUER_M81Tee
            "cfp_vests",    // MilitiaSMGFighter: CFP_RAV_Empty_Green; Fighter: CFP_Tactical1_M81
            "rhsgref_c_weapons", // DM, Grenadier: rhs_panzerfaust60_mag, rhs_weap_panzerfaust60
            "rhsusf_c_radio",    // Olga: rhs_Female01ENG
            "USP_Gear_Body"      // Olga: USP_RUGBY_G3C_RGR_MPW
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
