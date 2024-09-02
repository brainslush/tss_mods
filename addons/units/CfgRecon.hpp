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
        {"secondarymagazines",1},
        {"primarymagazines",{"weight", 72}},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",2},
        {"markerevac",1},
        {"primarymagazines",{"weight", 16}}
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
        {"secondarymagazines",1},
        {"primarymagazines",{"weight", 72}},
        {"primarygrenades",8},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"primarygrenades",8},
        {"markerevac",1},
        {"huntirmonitor",1},
        {"huntirgrenade",3},
        {"grenades",2}
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
        laserbatteries,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"secondarymagazines",1},
        {"primarymagazines",{"weight", 72}},
        {"primarygrenades",6},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"primarygrenades",6},
        {"markerevac",1},
        {"huntirmonitor",1},
        {"huntirgrenade",3},
        "eplrs"
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
    displayName = "Recon Automatic Rifleman";

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
        {"secondarymagazines",1},
        {"primarymagazines",{"weight", 75}},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",1},
        {"primarymagazines",{"weight", 75}},
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
        laserbatteries,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"secondarymagazines",1},
        {"primarymagazines",{"weight", 72}},
        {"primarygrenades",8},
        {"grenades",1},
        {"markerred",2}
    };
    tss_backpacksContent[] = {
        {"primarygrenades",6},
        "anprc117",
        {"markerevac",1},
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
        {"secondarymagazines",1},
        {"primarymagazines",{"weight", 72}},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        "expkit",
        {"grenades",2},
        {"markerevac",1}
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
    tss_backpacks[] = {"medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        laserbatteries,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"secondarymagazines",1},
        {"primarymagazines",{"weight", 72}},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        "darterBlufor",
        {"markerevac",1}
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
    tss_backpacks[] = {"medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",{"weight", 72}},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        "medkitclsbravo",
        {"smokewhite",4},
        {"markerevac",3}
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
    displayName = "Recon Marksman";

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
        {"secondarymagazines",1},
        {"primarymagazines",{"weight", 72}},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",1},
        {"primarymagazines",{"weight", 16}},
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
class tss_recon_sniper: B_Recon_Sharpshooter_F {
    TSSAUTHOR
    RECUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Sniper";

    tss_primaries[] = {"sniper"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"marksman"};
    tss_backpacks[] = {"medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "dmrkit",
        {"secondarymagazines",1},
        {"primarymagazines",{"weight", 72}},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",1},
        {"primarymagazines",{"weight", 16}},
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
        {"secondarymagazines",1},
        {"primarymagazines",{"weight", 72}},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",1},
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
