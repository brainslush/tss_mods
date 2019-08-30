class tss_fd_helipilot : B_Helipilot_F {
    TSSAUTHOR
    _generalMacro = "B_Helipilot_F";
    displayName = "Helicopter Pilot";

    tss_primaries[] = {};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"helipilot"};
    tss_vests[] = {"helipilot"};
    tss_backpacks[] = {};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152"
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
class tss_fd_helicrew : B_helicrew_F {
    TSSAUTHOR
    _generalMacro = "B_helicrew_F";
    displayName = "Helicopter Crew";

    tss_primaries[] = {};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"helipilot"};
    tss_vests[] = {"helipilot"};
    tss_backpacks[] = {};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152"
    };
    tss_backpacksContent[] = {};

    tss_helmets[] = {"caps"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_fd_atc: tss_infantry_ptl {
    TSSAUTHOR
    displayName = "Air Trafic Controller";

    tss_primaries[] = {};
    tss_secondaries[] = {};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {};
    tss_backpacks[] = {"large"};
    tss_uniformsContent[] = {
        "fak",
        "markers"
    };
    tss_vestsContent[] = {};
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
class tss_fd_col: tss_fd_atc {
    displayName = "Chief of Logistics";
};
class tss_fd_log: tss_infantry_repair {
    TSSAUTHOR
    engineer = 1;
    displayName = "Logistician";

    tss_primaries[] = {};
    tss_secondaries[] = {};
    tss_launchers[] = {};

    tss_uniforms[] = {"helipilot"};
    tss_vests[] = {};
    tss_backpacks[] = {"large"};
    tss_uniformsContent[] = {
        "fak",
        "markers"
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] = {
        "anprc148",
        "anprc152"
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
class tss_fd_clog: tss_fd_log {
    displayName = "Combat Logistician";
};
class tss_fd_pilot : B_Pilot_F {
    TSSAUTHOR
    _generalMacro = "B_Pilot_F";
    displayName = "Jet Pilot";

    tss_primaries[] = {};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"helipilot"};
    tss_vests[] = {"helipilot"};
    tss_backpacks[] = {};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152"
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
