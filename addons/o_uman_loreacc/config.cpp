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
            "gr7bow_fgwf_uniforms",  // FGWF_U_USMC_MCCUU_M81_MARPAT_roll_2
            "gr7bow_fgwf_vests",     // FGWF_V_Flak_Vest_Vydra_3M
            "A3_Characters_F",       // Man_A3
            "A3_Characters_F_Enoch", // RussianHead_3
            "A3_Weapons_F",          // Standard kit, SmokeShell
            "CUP_Creatures_Military_Russia", // Scarf
            "CUP_Creatures_Military_USMC",   // Terrorist: Vest, Militant: Vest
            "CUP_Weapons_WeaponsCore", // Shared base classes for CUP_Weapons_*
            "CUP_Weapons_AK",          // AK12, AK74M, AKS74U
            "CUP_Weapons_Grenades",    // RGD5 grenades
            "cfp_uniforms", // CFP_GUER_M81Tee
            "rhsgref_c_weapons"  // Panzerfaust 60
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
