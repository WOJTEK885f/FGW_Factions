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
            "gr7bow_fgwf_uniforms",             // ArmedBodyguard: FGWF_U_Marshal; Ivan: FGWF_U_PMC_Unit_1; Yevgen: FGWF_U_PMC_Unit_31
            "gr7bow_fgwf_vests",                // FemaleCivilianFighter, FemaleMilitia_TT33, MilitiaRifleman_BikeHelmet, MilitiaRifleman_Light, MilitiaRifleman_OldHelmet, MilitiaRifleman_SteelHelmet, Petro, Sergei, SpecialSnowfox: FGWF_V_Flak_Vest_Vydra_3M
            "gr7bow_fgwf_weapons",              // TrainedMarksman: FGWF_srifle_AWM_blk_sd
            "A3_Characters_F",                  // Base unit class (B_Soldier_F, Head_Euro); FemaleBase: Head_Female; MilitiaRifleman_BikeHelmet, MilitiaRifleman_Light, MilitiaRifleman_OldHelmet, MilitiaRifleman_SteelHelmet, SpecialRattlesnake: G_Bandanna_blk; MilitiaSniper, SpecialCheetah: G_Bandanna_khk; MilitiaSMGFighter: G_Bandanna_oli; SpecialScorpion: G_Bandanna_tan; FemaleCivilianFighter: H_Bandanna_sgg
            "A3_Characters_F_Enoch",            // Base: Head_Enoch, Head_Russian; Georgiy: WhiteHead_32; Ivan: LivonianHead_3; Petro: WhiteHead_25
            "A3_Characters_F_Heads",            // Face models (Man_A3); ArmedBodyguard, SpecialSnowfox: G_Sport_Blackred; Sergei: WhiteHead_09
            "A3_Characters_F_Orange",           // Yevgen: GreekHead_A3_12
            "A3_Dubbing_Radio_F",               // Base identity class: Language (LanguageENG_F, LanguageENGB_F)
            "A3_Dubbing_Radio_F_EXP",           // Base identity class: Language (LanguageENGFRE_F)
            "A3_Dubbing_Radio_F_Enoch",         // GuerBase identity class: Language (LanguageRUS_F); Georgiy, Petro: Male01RUS; Ivan, Yevgen: Male02RUS; Sergei: Male03RUS
            "A3_Weapons_F_LongRangeRifles_EBR", // Petro, Sergei: srifle_EBR_F
            "CUP_Creatures_Military_Germany",       // Spetsnaz: CUP_V_B_JPC_Black_Light
            "CUP_Creatures_Military_PMC",           // FemaleCivilianFighter, FemaleCivilianFighterCaptain, SpecialVulture: CUP_I_B_PMC_Unit_1; MilitiaRifleman_Light: CUP_I_B_PMC_Unit_11; MilitiaRifleman_BikeHelmet: CUP_I_B_PMC_Unit_15; SpecialSnowfox: CUP_I_B_PMC_Unit_19; Georgiy, MilitiaRifleman_OldHelmet: CUP_I_B_PMC_Unit_2; MilitiaRifleman_SteelHelmet: CUP_I_B_PMC_Unit_43; ArmedEscortGuard_M1A1, FemaleCivilianFighterCaptain: CUP_V_PMC_CIRAS_Black_Empty; MilitiaSniper: CUP_V_PMC_CIRAS_Coyote_Empty; SpecialSealion: CUP_V_PMC_CIRAS_Winter_Empty; ArmedBodyguard: CUP_V_PMC_IOTV_Black_Empty
            "CUP_Creatures_Military_Russia",        // FemaleCivilianFighterCaptain, MilitiaRifleman_SteelHelmet: CUP_H_RUS_K6_3; SpecialVulture: CUP_H_RUS_Altyn_Shield_Up_black
            "CUP_Creatures_Military_SLA",           // MilitiaRifleman_OldHelmet: CUP_H_SLA_Helmet_URB_worn
            "CUP_Creatures_Military_USArmy",        // MilitiaRifleman_BikeHelmet, SpecialRattlesnake: CUP_H_USArmy_Helmet_Protec; SpecialCheetah: CUP_H_USArmy_Helmet_M1_plain_M81; SpecialScorpion: CUP_V_B_Interceptor_Base_Coyote; TrainedInfantry: CUP_V_B_Interceptor_Rifleman_M81
            "CUP_Creatures_Military_USMC",          // FemaleMilitia_TT33, MilitiaSMGFighter: CUP_U_B_USMC_MCCUU_MARPAT_M81
            "CUP_Creatures_People_Civil_Chernarus", // MaleVillager: CUP_U_C_Worker_02, CUP_V_C_Police_Holster
            "CUP_Dubbing_Radio_RU_c",               // GuerBase identity class: Language (CUP_D_Language_RU)
            "CUP_Weapons_AK",         // SpecialSnowfox: CUP_arifle_SAIGA_MK03
            "CUP_Weapons_Ammunition", // Multiple units - Ammo
            "CUP_Weapons_Colt1911",   // FemaleCivilianFighterCaptain, FemaleMilitia_M1911: CUP_hgun_Colt1911
            "CUP_Weapons_EVO",        // MilitiaSMGFighter: CUP_smg_EVO
            "CUP_Weapons_Glock17",      // ArmedEscortGuard_MP5, Georgiy, SpecialOwl: CUP_hgun_Glock17_blk
            "CUP_Weapons_Grenades",   // Multiple units - Grenades
            "CUP_Weapons_HK416",      // Spetsnaz: CUP_arifle_HK416_Black
            "CUP_Weapons_M14",        // MaleVillager, MilitiaRifleman_Light, MilitiaSniper: CUP_srifle_M14
            "CUP_Weapons_M16",        // SpecialSealion: CUP_arifle_M16A4_Base; SpecialScorpion, TrainedInfantry: CUP_arifle_M4A1_black
            "CUP_Weapons_M17",        // MilitiaSniper: CUP_hgun_M17_Black
            "CUP_Weapons_M240",       // SpecialRattlesnake: CUP_lmg_FNMAG_RIS_modern
            "CUP_Weapons_M9",         // Ivan: CUP_hgun_M9A1
            "CUP_Weapons_Makarov",    // ArmedBodyguard, FemaleVillager: CUP_hgun_Makarov
            "CUP_Weapons_MP5",        // ArmedBodyguard, ArmedEscortGuard_MP5, SpecialWolf: CUP_smg_MP5A5_Rail_VFG
            "CUP_Weapons_NVG",        // SpecialOwl, SpecialSnowfox: CUP_NVG_PVS7
            "CUP_Weapons_Revolver",   // ArmedEscortGuard_M1A1, SpecialSnowfox: CUP_hgun_TaurusTracker455
            "CUP_Weapons_SPAS12",     // ArmedEscortGuard_SPAS12: CUP_sgun_SPAS12
            "CUP_Weapons_Steyr",      // SpecialCheetah: CUP_arifle_AUG_A1
            "CUP_Weapons_SVD",        // SpecialOwl: CUP_srifle_SVD_pso
            "CUP_Weapons_TT",         // FemaleMilitia_TT33: CUP_hgun_TT
            "cfp_glasses",  // TrainedInfantry, TrainedMarksman: CFP_Neck_Plain2
            "cfp_headgear", // ArmedEscortGuard_M1A1: SP_M1Helmet_MPBlack; MaleVillager: SP_BoonieHat_Tan; MilitiaSMGFighter: SP_Bandana_Black; MilitiaSniper: CFP_BoonieHat_M81; SpecialOwl, SpecialWolf, Spetsnaz: SP_PASGTHelmet_Black1; SpecialScorpion, SpecialSealion, SpecialSnowfox: CFP_OPS2017_Helmet_Grey; TrainedInfantry: CFP_PASGTHelmet_M812
            "CFP_O_RUMVD",  // SpecialCheetah, TrainedMarksman: CFP_V_O_RUMVD_SURPAT
            "cfp_uniforms", // FemaleVillager: CFP_U_KhetPartug_Short_Brown; MilitiaSniper: CFP_GUER_M81; SpecialScorpion: CFP_GUER_PolyDesTee; SpecialSealion: CFP_FieldUniform_police_sudan_SS; Spetsnaz: CFP_U_WorkUniform_SudanPolice2
            "cfp_vests",    // MilitiaSMGFighter, SpecialRattlesnake: CFP_RAV_Empty_Green; SpecialOwl, SpecialVulture, SpecialWolf: SP_Tactical1_Black
            "rhsgref_c_troops",  // TrainedMarksman: rhsgref_patrolcap_specter
            "rhsgref_c_weapons", // ArmedEscortGuard_M1A1: rhs_weap_m3a1, rhsgref_30rnd_1143x23_M1911B_SMG; SpecialCheetah, SpecialOwl, SpecialScorpion, SpecialSealion, SpecialSnowfox, SpecialVulture, Spetsnaz, TrainedMarksman: rhs_panzerfaust60_mag, rhs_weap_panzerfaust60
            "rhsusf_c_weapons",  // FemaleCivilianFighter, FemaleCivilianFighterCaptain, SpecialVulture, Yevgen: rhs_weap_M590_5RD, rhsusf_5Rnd_00Buck, rhsusf_5Rnd_Slug
            "USP_Gear_Body",     // ArmedEscortGuard_M1A1, SpecialOwl: USP_PCU_G3C; Petro, Sergei: USP_RUGBY_G3C_BLK_MPW; SpecialCheetah: USP_RUGBY_G3C_RGR_MPW; SpecialRattlesnake: USP_RUGBY_G3C_CBR_AOR1; SpecialWolf: USP_PCU_G3C_BLK_MTN; TrainedInfantry, TrainedMarksman: USP_G3C_CU_AOR2
            "USP_Gear_Face"      // SpecialOwl: USP_OAKLEY_SI2_YEL; SpecialSealion: USP_SOTR; SpecialWolf: USP_SHEMAGH_HEAD_BLK; Spetsnaz: USP_FM12_BLK2
        };
        units[] = {
            "FGWF_B_Player_ArmedBodyguard",
            "FGWF_B_Player_MilitiaRifleman_Light",
            "FGWF_B_Player_MilitiaRifleman_OldHelmet",
            "FGWF_B_Player_MilitiaRifleman_SteelHelmet",
            "FGWF_B_Player_MilitiaRifleman_BikeHelmet",
            "FGWF_B_Player_MilitiaSniper",
            "FGWF_B_Player_MilitiaSMGFighter",
            "FGWF_B_Player_MaleVillager",
            "FGWF_B_Player_FemaleMilitia_TT33",
            "FGWF_B_Player_FemaleMilitia_M1911",
            "FGWF_B_Player_ArmedEscortGuard_M1A1",
            "FGWF_B_Player_ArmedEscortGuard_MP5",
            "FGWF_B_Player_ArmedEscortGuard_SPAS12",
            "FGWF_B_Player_FemaleVillager",
            "FGWF_B_Player_FemaleCivilianFighter",
            "FGWF_B_Player_FemaleCivilianFighterCaptain",
            "FGWF_B_Player_TrainedInfantry",
            "FGWF_B_Player_TrainedMarksman",
            "FGWF_B_Player_Spetsnaz",
            "FGWF_B_Player_SpecialSealion",
            "FGWF_B_Player_SpecialOwl",
            "FGWF_B_Player_SpecialRattlesnake",
            "FGWF_B_Player_SpecialScorpion",
            "FGWF_B_Player_SpecialCheetah",
            "FGWF_B_Player_SpecialWolf",
            "FGWF_B_Player_SpecialSnowfox",
            "FGWF_B_Player_SpecialVulture",
            "FGWF_B_Player_Companion_Ivan",
            "FGWF_B_Player_Companion_Yevgen",
            "FGWF_B_Player_Companion_Georgiy",
            "FGWF_B_Player_Companion_Petro",
            "FGWF_B_Player_Companion_Sergei"
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
