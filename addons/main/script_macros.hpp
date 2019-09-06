#include "\z\ace\addons\main\script_macros.hpp"

#define XEH_LOG(msg) if (!SLX_XEH_DisableLogging) then { diag_log [diag_frameNo, diag_tickTime, time, msg] }

#define TSSAUTHOR \
    author = "Tactical Stealth Squad"; \
    dlc = "TSSMod";

#define SCOPE0 \
    scope = 0;\
    scopeCurator = 0;\
    scopeArsenal = 0;

#define SCOPE1 \
    scope = 1;\
    scopeCurator = 1;\
    scopeArsenal = 1;

#define SCOPE2 \
    scope = 2;\
    scopeCurator = 2;\
    scopeArsenal = 2;

#define SETQMVAR(var1,var2) missionnamespace setVariable [ARR_3(Format[QGVAR(%1),var1],var2)];
#define GETQMVAR(var1,var2) missionnamespace getVariable [ARR_3(Format[QGVAR(%1),var1],var2)];

#define TRANSPORTMAGAZINE(var1,var2)  class _xx_##var1 {\
    magazine=#var1;\
    count=var2;\
};

#define TRANSPORTITEM(var1,var2)  class _xx_##var1 {\
    name=#var1;\
    count=var2;\
};

#define TRANSPORTWEAPON(var1,var2)  class _xx_##var1 {\
    weapon=#var1;\
    count=var2;\
};

#define TRANSPORTBACKPACK(var1,var2)  class _xx_##var1 {\
    backpack=#var1;\
    count=var2;\
};

#define EMPTYCARGO \
class TransportItems {};\
class TransportWeapons {};\
class TransportMagazines {};\
class TransportBackpacks {};

#define VEHCLASS(var) \
vehicleClass = var; \
editorSubcategory = var

#define EMPTYUNIT \
uniformClass = ""; \
backpack = ""; \
weapons[] = {}; \
magazines[] = {}; \
items[] = {}; \
linkedItems[] = {}; \
respawnWeapons[] = {}; \
respawnMagazines[] = {}; \
respawnItems[] = {}; \
respawnLinkedItems[] = {};
