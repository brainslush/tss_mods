class CfgVehicleClasses {
    class no_category;
    class tss_units_base: no_category {};

    class tss_ra: tss_units_base {
        displayname = "ranger";
        abbreviation = "ra";
    };
    class tss_recon: tss_units_base {
        displayname = "recon";
        abbreviation = "re";
    };
    class tss_diver: tss_units_base {
        displayname = "recon diver";
        abbreviation = "red";
    };
    class tss_sniper: tss_units_base {
        displayname = "sniper-spotter team";
        abbreviation = "sst";
    };
    class tss_fd: tss_units_base {
        displayname = "flight division";
        abbreviation = "fd";
    };

    class tss_air: no_category {
        displayname = "=tss= air";
    };
    class tss_cars: no_category {
        displayname = "=tss= cars";
    };
    class tss_boats: no_category {
        displayname = "=tss= boats";
    };
    class tss_support: no_category {
        displayname = "=tss= support";
    };
    class tss_objects: no_category {
        displayname = "=tss= objects";
    };
    class tss_autonomous: no_category {
        displayname = "=tss= autonomous";
    };
    class tss_static: no_category {
        displayname = "=tss= static";
    };

    // boxes
    class tss_boxes_ammo556: no_category {
        displayname="=tss= ammo 5.56";
    };
    class tss_boxes_ammo762: no_category {
        displayname="=tss= ammo 7.62";
    };
    class tss_boxes_ammoexp: no_category {
        displayname="=tss= ordnance";
    };
    class tss_boxes: no_category {
        displayname="=tss= boxes";
    };
    class tss_boxes_launcher: no_category {
        displayname="=tss= launcher";
    };
    class tss_boxes_support: no_category {
        displayname="=tss= support boxes";
    };
    class tss_boxes_weapons: no_category {
        displayname="=tss= weapon boxes";
    };
    class tss_boxes_supply: no_category {
        displayname="=tss= supply boxes";
    };
};
