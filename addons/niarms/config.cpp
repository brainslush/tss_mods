#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "brainslush";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "tss_mods_units",
            "hlcweapons_ar15",
            "hlcweapons_m14",
            "hlcweapons_SAW",
            "niarms_416"
        };
    };
};

#include "CfgTSSLoadouts.hpp"
