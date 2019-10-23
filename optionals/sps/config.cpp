#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "brainslush";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            QGVARMAIN(main),
            QGVARMAIN(units),
            "SPS_weapons_ai_axmc"
        };
    };
};

#include "CfgWeapons.hpp"
#include "CfgEventhandlers.hpp"
#include "CfgTSSLoadouts.hpp"
