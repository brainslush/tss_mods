#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tss_mods_main", "A3_Ui_F_AoW"};
        author = "brainslush";
        authors[] = {"JoramD", "brainslush"};
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgMainMenuSpotlight.hpp"
