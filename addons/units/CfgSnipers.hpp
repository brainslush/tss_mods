class tss_recon_snp: B_sniper_F {
    displayName = "Sniper";
    TSSAUTHOR
    SNIPERSETBASE

    attendant = 1;
    tss_primaries[] = {"sniper"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"gunbag"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        "maptool",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primaryaltmagazines",5},
        {"secondarymagazines",1},
        "sniperkit",
        {"primarymagazines",2}
    };
    tss_backpacksContent[] = {
        {"primarymagazines",4},
        {"markerevac",1}
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
class tss_recon_spt: B_spotter_F {
    displayName = "Spotter";
    TSSAUTHOR
    SNIPERSETBASE

    attendant = 1;
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };

    tss_primaries[] = {"dmr"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        "maptool",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",7},
        {"secondarymagazines",1},
        "sniperkit"
    };
    tss_backpacksContent[] = {
        "spotterkit",
        {"markerevac",1},
        {"dummymagazine",12}
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
