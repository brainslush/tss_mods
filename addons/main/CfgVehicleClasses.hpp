class CfgVehicleClasses {
    class no_category;
    class tss_units_base: no_category {};

    class tss_infantry: tss_units_base {
        displayname = "Combat";
        abbreviation = "Combat";
    };
    class tss_recon: tss_units_base {
        displayname = "Recon";
        abbreviation = "Recon";
    };
    class tss_diver: tss_units_base {
        displayname = "Diver";
        abbreviation = "Diver";
    };
    class tss_sniper: tss_units_base {
        displayname = "Sniper/Spotter";
        abbreviation = "Sniper/Spotter";
    };
    class tss_fd: tss_units_base {
        displayname = "Aviation/Logistics";
        abbreviation = "Aviation/Logistics";
    };
    class tss_pmc: tss_units_base {
        displayname = "PMC";
        abbreviation = "PMC";
    };
    class tss_bp: tss_units_base {
        displayname = "Base Personnel";
        abbreviation = "BP";
    };

    class tss_air: no_category {
        displayname = "Air";
    };
    class tss_cars: no_category {
        displayname = "Cars";
    };
    class tss_boats: no_category {
        displayname = "Boats";
    };
    class tss_support: no_category {
        displayname = "Support";
    };
    class tss_objects: no_category {
        displayname = "Objects";
    };
    class tss_autonomous: no_category {
        displayname = "Autonomous";
    };
    class tss_static: no_category {
        displayname = "Static";
    };

    // boxes
    class tss_boxes_ammo556: no_category {
        displayname="Ammo 5.56";
    };
    class tss_boxes_ammo762: no_category {
        displayname="Ammo 7.62";
    };
    class tss_boxes_ammoexp: no_category {
        displayname="Ordnance";
    };
    class tss_boxes: no_category {
        displayname="Boxes";
    };
    class tss_boxes_launcher: no_category {
        displayname="Launcher";
    };
    class tss_boxes_support: no_category {
        displayname="Support boxes";
    };
    class tss_boxes_weapons: no_category {
        displayname="Weapon boxes";
    };
    class tss_boxes_supply: no_category {
        displayname="Supply boxes";
    };
};
