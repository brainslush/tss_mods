class tss_bp_atc: tss_infantry_ptl {
    TSSAUTHOR
    BASESETBASE
    displayName = "Air Trafic Controller";

    tss_primaries[] = {};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"belt"};
    tss_backpacks[] = {"large"};
    tss_uniformsContent[] = {
        "sheetbook",
        "fak",
        "maptool",
        "markers"
    };
    tss_vestsContent[] = {
        {"secondarymagazines",2}
    };
    tss_backpacksContent[] = {
        "anprc148",
        "anprc152",
        {"anprc117", 2}
    };

    tss_helmets[] = {"caps"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"binocs"};
    tss_maps[] = {"map"};
    tss_gps[] = {"tablet"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_bp_col: tss_bp_atc {
    BASESETBASE
    displayName = "Chief of Logistics";
};
/*
class tss_bp_log: tss_infantry_engineer {
    TSSAUTHOR
    BASESETBASE
    engineer = 1;
    displayName = "Logistician/Engineer";

    tss_primaries[] = {};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"helipilot"};
    tss_vests[] = {"belt"};
    tss_backpacks[] = {"large"};
    tss_uniformsContent[] = {
        "sheetbook",
        "fak",
        "maptool",
        "markers"
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"secondarymagazines",2}
    };
    tss_backpacksContent[] = {};

    tss_helmets[] = {"caps"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {"tablet"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
*/
class tss_bp_ptd: tss_infantry_ptd {
    BASESETBASE

    tss_primaries[] = {};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"belt"};
    tss_backpacks[] = {"small","medium"};
    tss_uniformsContent[] = {
        "sheetbook",
        "fak",
        "maptool",
        "markers"
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"secondarymagazines",2}
    };
    tss_backpacksContent[] = {
        "medkitptdbase"
    };

    tss_helmets[] = {"caps"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {"tablet"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
