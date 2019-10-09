#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "brainslush";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {QGVAR(item)};
        requiredAddons[] = {"tss_mods_main"};
    };
};

#include "CfgWeapons.hpp"
#include "gui\RscDisplays.hpp"
