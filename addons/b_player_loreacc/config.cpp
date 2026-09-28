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
            "gr7bow_fgwf_uniforms",             // FGWF_U_C_Worker_02, FGWF_U_Marshal, FGWF_U_PMC_Unit_1
            "gr7bow_fgwf_vests",                // FGWF_V_Flak_Vest_Vydra_3M
            "gr7bow_fgwf_weapons",              // FGWF_srifle_AWM_blk_sd
            "A3_Characters_F",                  // B_Soldier_F, G_Bandanna_blk, G_Bandanna_khk, G_Bandanna_oli, G_Bandanna_tan, H_Bandanna_sgg, Head_Euro, Head_Female
            "A3_Characters_F_Enoch",            // Head_Enoch, Head_Russian, LivonianHead_10, LivonianHead_3, LivonianHead_7, WhiteHead_04, WhiteHead_31
            "A3_Characters_F_Heads",            // G_Sport_Blackred, Man_A3
            "A3_Dubbing_Radio_F",               // LanguageENG_F
            "A3_Dubbing_Radio_F_ENGB",          // LanguageENGB_F
            "A3_Dubbing_Radio_F_ENGFR",         // LanguageENGFRE_F
            "A3_Dubbing_Radio_F_Enoch",         // LanguageRUS, Male01RUS, Male02RUS, Male03RUS
            "A3_Weapons_F_LongRangeRifles_EBR", // srifle_EBR_F
            "CUP_Creatures_Military_Germany",       // CUP_V_B_JPC_Black_Light
            "CUP_Creatures_Military_PMC",           // CUP_I_B_PMC_Unit_1, CUP_I_B_PMC_Unit_11, CUP_I_B_PMC_Unit_15, CUP_I_B_PMC_Unit_19, CUP_I_B_PMC_Unit_2, CUP_I_B_PMC_Unit_43, CUP_V_PMC_CIRAS_Black_Empty, CUP_V_PMC_CIRAS_Coyote_Empty, CUP_V_PMC_CIRAS_Winter_Empty, CUP_V_PMC_IOTV_Black_Empty
            "CUP_Creatures_Military_Russia",        // CUP_H_RUS_Altyn_Shield_Up_black, CUP_H_RUS_K6_3
            "CUP_Creatures_Military_SLA",           // CUP_H_SLA_Helmet_URB_worn
            "CUP_Creatures_Military_USArmy",        // CUP_H_USArmy_Helmet_M1_plain_M81, CUP_H_USArmy_Helmet_Protec, CUP_V_B_Interceptor_Base_Coyote, CUP_V_B_Interceptor_Rifleman_M81
            "CUP_Creatures_Military_USMC",          // CUP_U_B_USMC_MCCUU_MARPAT_M81
            "CUP_Creatures_People_Civil_Chernarus", // CUP_U_C_Worker_02, CUP_V_C_Police_Holster
            "CUP_Weapons_Ammunition",               // CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M, CUP_10Rnd_762x39_SaigaMk03_M, CUP_10Rnd_762x54_SVD_M, CUP_15Rnd_9x19_M9, CUP_17Rnd_9x19_glock17, CUP_17Rnd_9x19_M17_Black, CUP_20Rnd_762x51_DMR, CUP_30Rnd_556x45_AUG, CUP_30Rnd_556x45_Stanag, CUP_30Rnd_9x19_EVO, CUP_30Rnd_9x19_MP5, CUP_5Rnd_86x70_L115A1, CUP_6Rnd_45ACP_M, CUP_7Rnd_45ACP_1911, CUP_8Rnd_12Gauge_Pellets_No00_Buck, CUP_8Rnd_12Gauge_Slug, CUP_8Rnd_762x25_TT, CUP_8Rnd_9x18_Makarov_M
            "CUP_Weapons_Colt1911",                 // CUP_hgun_Colt1911
            "CUP_Weapons_EVO",                      // CUP_smg_EVO
            "CUP_Weapons_Glock",                    // CUP_hgun_Glock17_blk
            "CUP_Weapons_Grenades",                 // CUP_HandGrenade_RGD5
            "CUP_Weapons_M14",                      // CUP_srifle_M14
            "CUP_Weapons_M17",                      // CUP_hgun_M17_Black
            "CUP_Weapons_M240",                     // CUP_lmg_FNMAG_RIS_modern
            "CUP_Weapons_M4",                       // CUP_arifle_HK416_Black, CUP_arifle_M16A4_Base, CUP_arifle_M4A1_black
            "CUP_Weapons_M9",                       // CUP_hgun_M9A1
            "CUP_Weapons_Makarov",                  // CUP_hgun_Makarov
            "CUP_Weapons_MP5",                      // CUP_smg_MP5A5_Rail_VFG
            "CUP_Weapons_NVG",                      // CUP_NVG_PVS7
            "CUP_Weapons_Revolver",                 // CUP_hgun_TaurusTracker455
            "CUP_Weapons_Saiga",                    // CUP_arifle_SAIGA_MK03
            "CUP_Weapons_SPAS12",                   // CUP_sgun_SPAS12
            "CUP_Weapons_Steyr",                    // CUP_arifle_AUG_A1
            "CUP_Weapons_SVD",                      // CUP_srifle_SVD_pso
            "CUP_Weapons_TT",                       // CUP_hgun_TT
            "cfp_glasses",  // CFP_Neck_Plain2
            "cfp_headgear", // CFP_BoonieHat_M81, CFP_OPS2017_Helmet_Grey, CFP_PASGTHelmet_M812, SP_Bandana_Black, SP_BoonieHat_Tan, SP_M1Helmet_MPBlack, SP_PASGTHelmet_Black1
            "CFP_O_RUMVD",  // CFP_V_O_RUMVD_SURPAT
            "cfp_uniforms", // CFP_FieldUniform_police_sudan_SS, CFP_GUER_M81, CFP_GUER_PolyDesTee, CFP_U_KhetPartug_Short_Brown, CFP_U_WorkUniform_SudanPolice2
            "cfp_vests",    // CFP_RAV_Empty_Green, SP_Tactical1_Black
            "rhsgref_c_troops",  // rhsgref_patrolcap_specter
            "rhsgref_c_weapons", // rhs_panzerfaust60_mag, rhs_weap_m3a1, rhs_weap_panzerfaust60, rhsgref_30rnd_1143x23_M1911B_SMG
            "rhsusf_c_weapons",  // rhs_weap_M590_5RD, rhsusf_5Rnd_00Buck, rhsusf_5Rnd_Slug
            "USP_Gear_Body",     // USP_G3C_CU_AOR2, USP_PCU_G3C, USP_PCU_G3C_BLK_MTN, USP_RUGBY_G3C_BLK_MPW, USP_RUGBY_G3C_CBR_AOR1, USP_RUGBY_G3C_RGR_MPW
            "USP_Gear_Face"      // USP_FM12_BLK2, USP_OAKLEY_SI2_YEL, USP_SHEMAGH_HEAD_BLK, USP_SOTR
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
