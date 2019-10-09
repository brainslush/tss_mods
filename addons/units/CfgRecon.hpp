class tss_recon_operator: B_recon_F {
    TSSAUTHOR
    RECUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Operator";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",2},
        {"primarymagazines",5},
        {"grenades",1},
        {"markerred",2}
    };
    tss_backpacksContent[] = {
        {"grenades",2},
        {"markerevac",2}
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_gl: B_recon_F {
    TSSAUTHOR
    RECUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Grendier";

    tss_primaries[] = {"riflegl"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"grenadier"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",2},
        {"primarymagazines",5},
        {"primarygrenades",4},
        {"grenades",1},
        {"markerred",2}
    };
    tss_backpacksContent[] = {
        {"primarygrenades",4},
        {"markerevac",2},
        {"huntirmonitor",1},
        {"huntirgrenade",3}
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_tl: B_recon_TL_F {
    TSSAUTHOR
    RECUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Teamleader";

    tss_primaries[] = {"riflegl"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"teamleader"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"secondarymagazines",2},
        {"primarymagazines",5},
        {"primarygrenades",4},
        {"grenades",1},
        {"markerred",2}
    };
    tss_backpacksContent[] = {
        {"grenades",2},
        {"primarygrenades",2},
        {"markerevac",2},
        {"huntirmonitor",1},
        {"huntirgrenade",3}
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"laserdesignator"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_ar: B_recon_F {
    TSSAUTHOR
    RECUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Weapon Specialist (Silenced AR)";

    tss_primaries[] = {"ar"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",2},
        {"primarymagazines",3},
        {"grenades",1},
        {"markerred",2}
    };
    tss_backpacksContent[] = {
        {"grenades",2},
        {"markerevac",2},
        {"primarymagazines",2}
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_com: B_recon_JTAC_F {
    TSSAUTHOR
    RECUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Communication Officer";

    tss_primaries[] = {"riflegl"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"teamleader"};
    tss_backpacks[] = {"medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"secondarymagazines",2},
        {"primarymagazines",5},
        {"primarygrenades",4},
        {"grenades",1},
        {"markerred",2}
    };
    tss_backpacksContent[] = {
        {"primarygrenades",2},
        "anprc117",
        {"markerevac",2},
        {"huntirmonitor",1},
        {"huntirgrenade",3}
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"laserdesignator"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_exp: B_recon_exp_F {
    TSSAUTHOR
    RECUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Explosive Specialist";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",2},
        {"primarymagazines",5},
        {"grenades",1},
        {"markerred",2}
    };
    tss_backpacksContent[] = {
        "expkit",
        {"markerevac",2}
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_drop: B_recon_F {
    TSSAUTHOR
    RECUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Drone Operator";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"secondarymagazines",2},
        {"primarymagazines",5},
        {"grenades",1},
        {"markerred",2}
    };
    tss_backpacksContent[] = {
        {"grenades",2},
        "darterBlufor",
        {"markerevac",2}
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"laserdesignator"};
    tss_maps[] = {"map"};
    tss_gps[] = {"uavterminalB"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_cls: B_recon_medic_F {
    TSSAUTHOR
    RECUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
    };
    displayName = "Recon Combat Medic";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"medic"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",2},
        {"primarymagazines",5},
        {"grenades",1},
        {"markerred",2}
    };
    tss_backpacksContent[] = {
        "medkitclsbravo",
        {"smokewhite",3},
        {"markerevac",2}
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_mm: B_Recon_Sharpshooter_F {
    TSSAUTHOR
    RECUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Scout Sniper";

    tss_primaries[] = {"dmr"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"marksman"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "dmrkit",
        {"secondarymagazines",2},
        {"primarymagazines",5},
        {"grenades",1},
        {"markerred",2}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2}
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_engineer: B_recon_F {
    TSSAUTHOR
    RECUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Engineer";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",2},
        {"primarymagazines",5},
        {"grenades",1},
        {"markerred",2}
    };
    tss_backpacksContent[] = {
        {"grenades",2},
        {"markerevac",2},
        "engineerkit"
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
