#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "brainslush";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {};
        skipWhenMissingDependencies = 1;
        requiredAddons[] = {
            QGVARMAIN(main),
            QGVARMAIN(units),
            QGVARMAIN(milgp),
            "CUP_Weapons_Ammunition"
        };
    };
};

#include "CfgEventhandlers.hpp"
#include "CfgTSSLoadouts.hpp"
