#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "brainslush";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "hlcweapons_core",
            QGVARMAIN(main),
            QGVARMAIN(units)
        };
    };
};

#include "CfgMagazines.hpp"
#include "CfgEventhandlers.hpp"
#include "CfgTSSLoadouts.hpp"
