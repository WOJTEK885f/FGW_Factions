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
            "gr7bow_fgwf_uniforms",             // FGWF_U_USMC_MCCUU_M81_MARPAT_roll_2
            "gr7bow_fgwf_vests",                // FGWF_V_Flak_Vest_Vydra_3M
            "A3_Characters_F",                  // G_Bandanna_blk, Head_Greek, Head_TK, O_Soldier_F
            "A3_Characters_F_Enoch",            // RussianHead_3, U_C_Uniform_Scientist_02_formal_F
            "A3_Characters_F_Heads",            // Man_A3
            "A3_Dubbing_Radio_F_ENGB",          // Male04ENGB
            "A3_Dubbing_Radio_F_PER",           // LanguagePER_F
            "A3_Weapons_F_LongRangeRifles_EBR", // srifle_EBR_F
            "CUP_Creatures_Military_USArmy", // CUP_G_Scarf_Face_Red, CUP_V_B_Interceptor_Rifleman_M81
            "CUP_Creatures_Military_USMC",   // CUP_V_CPC_Fastbelt_rngr
            "CUP_Dubbing_Radio_EN_c",        // CUP_D_Male05_EN
            "CUP_Dubbing_Radio_TK_c",        // Base class: CUP_D_Language_TK
            "CUP_Weapons_AK",                // CUP_arifle_AK12_black, CUP_arifle_AK74M, CUP_arifle_AKS74U_top_rail
            "CUP_Weapons_Ammunition",        // CUP_15Rnd_9x19_M9, CUP_17Rnd_9x19_M17_Black, CUP_20Rnd_TE1_Green_Tracer_762x51_DMR, CUP_30Rnd_545x39_AK12_M, CUP_30Rnd_545x39_AK74M_M, CUP_30Rnd_556x45_Stanag, CUP_7Rnd_50AE_Deagle
            "CUP_Weapons_Deagle",            // CUP_hgun_Deagle
            "CUP_Weapons_Grenades",          // CUP_HandGrenade_RGD5
            "CUP_Weapons_M17",               // CUP_hgun_M17_Black
            "CUP_Weapons_M4",                // CUP_arifle_M16A4_Base
            "CUP_Weapons_M9",                // CUP_hgun_M9A1
            "cfp_uniforms", // CFP_GUER_M81Tee
            "rhsgref_c_weapons"  // rhs_panzerfaust60_mag, rhs_weap_panzerfaust60
        };
        units[] = {
            "FGWF_O_Uman_Terrorist_AK74M",
            "FGWF_O_Uman_Terrorist_AKS74U",
            "FGWF_O_Uman_Militant_AK12",
            "FGWF_O_Uman_Militant_AK74M",
            "FGWF_O_Uman_Companion_Finn",
            "FGWF_O_Uman_Companion_Haaken"
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
