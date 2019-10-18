#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "brainslush";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "tss_mods_main",
            "ace_medical"
        };
    };
};

#include "CfgEventhandlers.hpp"
#include "ACE_Medical_Advanced2.hpp"
