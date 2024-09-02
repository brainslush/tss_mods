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
            "CUP_Weapons_Ammunition"
            //"CUP_Creatures_Military_BAF"
        };
    };
};

#include "CfgEventhandlers.hpp"
#include "CfgTSSLoadouts.hpp"
#include "CfgWeapons.hpp"
