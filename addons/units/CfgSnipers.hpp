class tss_recon_snp: B_sniper_F {
    displayName = "Sniper";
    TSSAUTHOR
    SNIPERSETBASE

    attendant = 1;
    tss_primaries[] = {"sniper"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"marksman"};
    tss_backpacks[] = {"small", "medium"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        laserbatteries
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",3},
        "sniperkit",
        {"primarymagazines",6}
    };
    tss_backpacksContent[] = {
        "sniperkitbag",
        {"primarymagazines",2},
        "medkitsniperspotter",
        {"markerevac",1}
    };

    tss_helmets[] = {"recon", "infantry"};
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

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"small", "medium"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        laserbatteries
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",9},
        {"secondarymagazines",1},
        "sniperkit",
        {"markerevac",1}
    };
    tss_backpacksContent[] = {
        "spotterkit",
        {"dummymagazine", 5},
        "medkitsniperspotter",
    };

    tss_helmets[] = {"recon", "infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"laserdesignator"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
