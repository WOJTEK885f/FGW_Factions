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
            "gr7bow_fgwf_vests",                // FGWF_V_Flak_Vest_Vydra_3M
            "A3_Characters_F",                  // B_Soldier_F, Head_Euro
            "A3_Characters_F_Enoch",            // Head_Enoch, Head_Russian, LivonianHead_10, LivonianHead_3, WhiteHead_01, WhiteHead_31
            "A3_Characters_F_Heads",            // Man_A3
            "A3_Dubbing_Radio_F_Enoch",         // LanguageRUS, Male01RUS, Male02RUS, Male03RUS
            "A3_Weapons_F_LongRangeRifles_EBR", // srifle_EBR_F
            "CUP_Creatures_Military_CDF",    // CUP_V_CDF_OfficerBelt
            "CUP_Creatures_Military_Russia", // CUP_RUS_Balaclava_blk
            "CUP_Creatures_Military_USMC",   // CUP_U_B_USMC_MCCUU_M81_MARPAT_roll_2, CUP_U_B_USMC_MCCUU_MARPAT_M81, CUP_V_CPC_Fastbelt_rngr
            "CUP_Weapons_AK",                // CUP_arifle_AKS74U_top_rail
            "CUP_Weapons_Ammunition",        // CUP_10Rnd_762x39_SaigaMk03_M, CUP_10Rnd_762x54_SVD_M, CUP_15Rnd_9x19_M9, CUP_20Rnd_TE1_Green_Tracer_762x51_DMR, CUP_30Rnd_556x45_Stanag, CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M
            "CUP_Weapons_Grenades",          // CUP_HandGrenade_RGD5
            "CUP_Weapons_M4",                // CUP_arifle_M16A4_Base, CUP_arifle_M4A3_black
            "CUP_Weapons_M9",                // CUP_hgun_M9A1
            "CUP_Weapons_NVG",               // CUP_NVG_PVS7
            "CUP_Weapons_Saiga",             // CUP_arifle_SAIGA_MK03
            "CUP_Weapons_SVD",               // CUP_srifle_SVD_pso
            "cfp_headgear", // SP_BoonieHat_Tan, SP_PASGTHelmet_Black1
            "cfp_uniforms", // CFP_GUER_M81Tee
            "cfp_vests",    // CFP_Tactical1_M81, SP_Tactical1_Tan
            "rhsusf_c_radio", // rhs_Female01ENG
            "USP_Gear_Body",  // USP_G3F_AOR1, USP_RUGBY_G3C_RGR_AOR1
            "USP_Gear_Face"   // USP_BEARD_BRN2, USP_BEARD_CH_MS_BLK2
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
