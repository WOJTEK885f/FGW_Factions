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
            "gr7bow_fgwf_uniforms",     // Dimitro: FGWF_U_PMC_Unit_1, SpecialForce: FGWF_U_PMC_Unit_35, Infantry, Machinegunner, Kostyantin, Oleg, Vitaly: FGWF_U_USMC_FROG3_WMARPAT
            "A3_Characters_F",          // Base unit class (O_Soldier_F, Head_Euro)
            "A3_Characters_F_Enoch",    // Base: Head_Russian; Vitaly: LivonianHead_5, Oleg: WhiteHead_01, Dimitro: WhiteHead_04, Kostyantin: WhiteHead_27
            "A3_Characters_F_Heads",    // Face models (Man_A3)
            "A3_Dubbing_Radio_F_Enoch", // Base identity class: Language (LanguageRUS_F); Vitaly, Dimitro: Male02RUS, Oleg: Male03RUS, Kostyantin: Male01RUS
            "A3_Weapons_F_SMGs_SMG_01", // SpecialForce: SMG_01_F
            "CUP_Creatures_Military_PMC",    // Infantry: CUP_V_PMC_IOTV_Black_Empty
            "CUP_Creatures_Military_Russia", // Machinegunner: CUP_H_RUS_Altyn_Shield_Up_black; Infantry: CUP_RUS_Balaclava_blk
            "CUP_Creatures_Military_USArmy", // Machinegunner: CUP_V_B_Interceptor_Base_Coyote
            "CUP_Creatures_Military_USMC",   // Sharpshooter: CUP_H_FR_BandanaWdl; SpecialForce: CUP_V_CPC_Fastbelt_rngr
            "CUP_Dubbing_Radio_RU_c",        // Base identity class: Language (CUP_D_Language_RU)
            "CUP_Weapons_Ammunition",       // Multiple units - Ammo
            "CUP_Weapons_Deagle",           // Sharpshooter: CUP_hgun_Deagle
            "CUP_Weapons_East_Attachments", // Sharpshooter: CUP_optic_PSO_1
            "CUP_Weapons_Glock17",            // Vitaly: CUP_hgun_Glock17_blk
            "CUP_Weapons_Grenades",         // Multiple units - Grenades (CUP_HandGrenade_RGD5)
            "CUP_Weapons_HK416",            // Oleg: CUP_arifle_HK416_Black
            "CUP_Weapons_M16",              // Infantry: CUP_arifle_M16A4_Base; Commando: CUP_arifle_M4A3_black
            "CUP_Weapons_M17",              // ArmedPolice, Scout: CUP_hgun_M17_Black
            "CUP_Weapons_M249",             // Machinegunner: CUP_lmg_M249_E2
            "CUP_Weapons_Makarov",          // Dimitro, Kostyantin: CUP_hgun_Makarov
            "CUP_Weapons_NVG",              // Sharpshooter, SpecialForce, ArmedPolice, Commando, Scout: CUP_NVG_PVS7
            "CUP_Weapons_SPAS12",           // ArmedPolice: CUP_sgun_SPAS12
            "CUP_Weapons_VSS",              // Sharpshooter: CUP_arifle_AS_VAL_pso
            "CFP_O_RUMVD",  // Oleg: CFP_V_O_RUMVD_SURPAT
            "cfp_headgear", // Sharpshooter, Commando, Scout: CFP_OPS2017_Helmet_Grey; ArmedPolice: SP_PASGTHelmet_Black1
            "cfp_uniforms", // Sharpshooter: CFP_BDU_M81Iraq; ArmedPolice, Commando, Scout: CFP_U_WorkUniform_SudanPolice
            "cfp_vests",    // Sharpshooter, Commando, Scout: CFP_Tactical1_M81; ArmedPolice: SP_Tactical1_Black
            "rhsgref_c_weapons", // Scout: rhs_weap_m3a1; SpecialForce, ArmedPolice, Commando, Scout: rhs_weap_panzerfaust60
            "USP_Gear_Face"      // Vitaly: USP_BEARD_BRN5
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
