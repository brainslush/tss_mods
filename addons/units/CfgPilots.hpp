class tss_fd_helipilot : B_Helipilot_F {
    TSSAUTHOR
    PILOTSETBASE
    displayName = "Helicopter Pilot";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"helipilot"};
    tss_vests[] = {"helipilot"};
    tss_backpacks[] = {};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        "microdagr"
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"primarymagazines",2},
        {"secondarymagazines",1},
        "eplrs"
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
    PILOTSETBASE
    displayName = "Helicopter Crew";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"helipilot"};
    tss_vests[] = {"helipilot"};
    tss_backpacks[] = {};
    tss_uniformsContent[] = {
        UNIFORMCONTENT
    };
    tss_vestsContent[] = {
        {"primarymagazines",2},
        {"secondarymagazines",1},
        "anprc148"
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
class tss_fd_pilot : B_Pilot_F {
    TSSAUTHOR
    PILOTSETBASE
    displayName = "Jet Pilot";

    tss_primaries[] = {};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"planepilot"};
    tss_vests[] = {};
    tss_backpacks[] = {};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        "microdagr"
    };
    tss_vestsContent[] = {
        {"secondarymagazines",1},
        "anprc148",
        "anprc152",
        "eplrs"
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
