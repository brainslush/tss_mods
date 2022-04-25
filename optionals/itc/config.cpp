#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "brainslush";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"tss_mods_main", "itc_land_ciws"};
    };
};

#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
