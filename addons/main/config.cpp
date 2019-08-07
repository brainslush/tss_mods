#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"ace_main"};
        author = "brainslush";
    };
};

class CfgMods {
    class TSSMod {
        picture = QPATHTOF(data\ui\icon_tss_factionClass.paa);
        logo = QPATHTOF(data\ui\icon_tss_factionClass.paa);
        logoOver = QPATHTOF(data\ui\icon_tss_factionClass.paa);
        logoSmall = QPATHTOF(data\ui\icon_tss_factionClass.paa);
        tooltipOwned = "TSS Mods";
        action = "http://tracker.tactical-stealth-squad.de";
        dlcColor[] = {0.4314, 0.05882, 0.05098, 1};
        overview = "Just awesome";
        hideName = 0;
        hidePicture = 0;
        name = "TSS Mods";
        dir = "@TSS";
    };
};

#include "CfgEden.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicleClasses.hpp"
