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
            "gr7bow_fgwf_uniforms",     // FGWF_U_PMC_Unit_1, FGWF_U_PMC_Unit_35, FGWF_U_USMC_FROG3_WMARPAT
            "A3_Characters_F",          // Head_Euro, O_Soldier_F
            "A3_Characters_F_Enoch",    // Head_Russian, LivonianHead_5, WhiteHead_01, WhiteHead_04, WhiteHead_27
            "A3_Characters_F_Heads",    // Man_A3
            "A3_Dubbing_Radio_F_Enoch", // LanguageRUS, Male01RUS, Male02RUS, Male03RUS
            "A3_Weapons_F_SMGs_SMG_01", // SMG_01_F
            "CUP_Creatures_Military_FR",     // CUP_H_FR_BandanaWdl
            "CUP_Creatures_Military_PMC",    // CUP_V_PMC_IOTV_Black_Empty
            "CUP_Creatures_Military_Russia", // CUP_H_RUS_Altyn_Shield_Up_black, CUP_RUS_Balaclava_blk
            "CUP_Creatures_Military_USArmy", // CUP_V_B_Interceptor_Base_Coyote
            "CUP_Creatures_Military_USMC",   // CUP_V_CPC_Fastbelt_rngr
            "CUP_Weapons_Ammunition",        // CUP_100Rnd_TE4_Green_Tracer_556x45_M249, CUP_17Rnd_9x19_glock17, CUP_17Rnd_9x19_M17_Black, CUP_20Rnd_9x39_SP5_VSS_M, CUP_30Rnd_556x45_Stanag, CUP_30Rnd_556x45_Stanag_Tracer_Green, CUP_7Rnd_50AE_Deagle, CUP_8Rnd_12Gauge_Pellets_No00_Buck, CUP_8Rnd_12Gauge_Slug, CUP_8Rnd_9x18_Makarov_M
            "CUP_Weapons_Deagle",            // CUP_hgun_Deagle
            "CUP_Weapons_East_Attachments",  // CUP_optic_PSO_1
            "CUP_Weapons_Glock",             // CUP_hgun_Glock17_blk
            "CUP_Weapons_Grenades",          // CUP_HandGrenade_RGD5
            "CUP_Weapons_M17",               // CUP_hgun_M17_Black
            "CUP_Weapons_M249",              // CUP_lmg_M249_E2
            "CUP_Weapons_M4",                // CUP_arifle_HK416_Black, CUP_arifle_M16A4_Base, CUP_arifle_M4A1_black
            "CUP_Weapons_Makarov",           // CUP_hgun_Makarov
            "CUP_Weapons_NVG",               // CUP_NVG_PVS7
            "CUP_Weapons_SPAS12",            // CUP_sgun_SPAS12
            "CUP_Weapons_Val",               // CUP_arifle_AS_VAL_pso
            "cfp_headgear", // CFP_OPS2017_Helmet_Grey, SP_PASGTHelmet_Black1
            "CFP_O_RUMVD",  // CFP_V_O_RUMVD_SURPAT
            "cfp_uniforms", // CFP_BDU_M81Iraq, CFP_U_WorkUniform_SudanPolice
            "cfp_vests",    // CFP_Tactical1_M81, SP_Tactical1_Black
            "rhsgref_c_weapons", // rhs_panzerfaust60_mag, rhs_weap_m3a1, rhs_weap_panzerfaust60, rhsgref_30rnd_1143x23_M1911B_SMG
            "USP_Gear_Face"      // USP_BEARD_BRN5
        };
        units[] = {
            "FGWF_O_Atov_Infantry",
            "FGWF_O_Atov_Machinegunner",
            "FGWF_O_Atov_Sharpshooter",
            "FGWF_O_Atov_SpecialForce",
            "FGWF_O_Atov_ArmedPolice",
            "FGWF_O_Atov_Commando",
            "FGWF_O_Atov_Scout",
            "FGWF_O_Atov_Companion_Dimitro",
            "FGWF_O_Atov_Companion_Kostyantin",
            "FGWF_O_Atov_Companion_Oleg",
            "FGWF_O_Atov_Companion_Vitaly"
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
