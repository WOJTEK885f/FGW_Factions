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
            "A3_Characters_F",       // Man_A3, WhiteHead_04, Head_Euro
            "A3_Characters_F_Enoch", // Head_Russian, Head_Enoch, LivonianHead_7, RussianMen
            "A3_Weapons_F",          // Standard kit items
            "CUP_Creatures_Military_PMC",    // CPC lightbelt
            "CUP_Creatures_Military_Russia", // K6-3, Altyn helmet
            "CUP_Creatures_Military_USMC",   // Interceptor vests
            "CUP_Weapons_WeaponsCore", // Shared base classes for CUP_Weapons_*
            "CUP_Weapons_ACR",         // ACR 556
            "CUP_Weapons_AK",          // AKS74U, AKM
            "CUP_Weapons_Grenades",    // RGD5 grenades
            "CUP_Weapons_M240",        // FN MAG, 7.62x51 belts
            "CUP_Weapons_NVG",         // NVGs (Bohdan, Ostap)
            "CUP_Weapons_SPAS12",      // SPAS-12, 12 Gauge shells
            "CUP_Weapons_TT",          // TT-33
            "cfp_headgear", // PASGT helmet
            "cfp_vests",    // RUMVD SURPAT vest
            "rhsgref_c_troops",  // Patrol cap
            "rhsgref_c_weapons", // Panzerfaust 60
            "USP_Gear_Body",     // G3F / RUGBY uniforms
            "USP_Gear_Face"      // FM-12 gas mask, beard
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
