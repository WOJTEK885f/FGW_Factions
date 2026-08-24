#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"WOJTEK885"};
        url = ECSTRING(main,url);
        name = QUOTE(COMPONENT);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "gr7bow_fgwf_main",
            "gr7bow_fgwf_b_vff_loreacc",
            "A3_Characters_F",
            "A3_Weapons_F",
            "zee_FiftyShadesOfFemale"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgFaces.hpp"
#include "CfgVehicles.hpp"
