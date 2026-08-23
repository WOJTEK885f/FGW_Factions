#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"WOJTEK885"};
        url = ECSTRING(main,url);
        name = QUOTE(COMPONENT);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "gr7bow_fgw_factions_main",
            "A3_Characters_F",
            "A3_Weapons_F",
            "zee_fsof"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgFaces.hpp"
#include "CfgVehicles.hpp"
