class CfgTSSLoadouts {
    class CfgLaunchers {
        class singleUse {
            class all {
                class COMPONENT {
                    launchers[] = {
                        "tf47_at4_heat",
                        "tf47_at4_HEDP",
                        "tf47_at4_HP"
                    };
                    defaultMagazine[] = {""};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
        class at {
            class all {
                class COMPONENT {
                    launchers[] = {"tf47_m3maaws"};
                    defaultMagazine[] = {"tf47_m3maaws_HEDP"};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
            optics = "atoptics";
        };
    };
    class CfgOptics {
        class atoptics {
            class day {
                class COMPONENT {
                    optics[] = {
                        "tf47_optic_m3maaws"
                    };
                };
            };
            class night {
                class COMPONENT {
                    optics[] = {
                        "tf47_optic_m3maaws"
                    };
                };
            };
            class both {
                class COMPONENT {
                    optics[] = {
                        "tf47_optic_m3maaws"
                    };
                };
            };
        };
    };
};
