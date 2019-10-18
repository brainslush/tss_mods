class CfgVehicles {
    class Weapon_Bag_Base;
    class B_UAV_01_backpack_F: Weapon_Bag_Base {
        class assembleInfo;
    };
    class tss_blk_antenna_backpack: B_UAV_01_backpack_F {
        TSSAUTHOR
        _generalmacro = "tss_blk_antenna_backpack";
        displayname = "TSS Antenna Bag (Black)";
        faction = "tss_units";
        mapsize = 0.6;
        maximumload = 0;
        scope = 2;
        side = 1;
        class assembleInfo: assembleinfo {
            assembleto = "tss_acre_antenna";
            base = "";
            displayname = "Antenna";
            primary = 1;
        };
    };
    class ThingX;
    class tss_acre_antenna: ThingX {
        XEH_ENABLED;
        TSSAUTHOR
        SCOPE2
        displayName = "TSS Portable Radio Rack";
        vehicleClass = "TSS_STATIC";
        model = QPATHTOF(data\model\tfw_rf3080.p3d);
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
        ace_dragging_cancarry = 1;
        ace_dragging_carryposition[] = {0, 1.2, 0};
        ace_dragging_carrydirection = 0;
        class assembleInfo {
            assembleTo = "";
            base = "";
            displayName = "";
            dissasembleTo[] = {"tss_blk_antenna_backpack"};
            primary = 1;
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "COMM 1";
                componentname = "ACRE_VRC103";
                allowedPositions[] = {"external"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {};
            };
            class Rack_2: Rack_1 {
                name = "COMM 2";
            };
        };
    };
    /*extern*/ class Land_DataTerminal_01_F;
    class TSS_Radio_Rack: Land_DataTerminal_01_F {
        XEH_ENABLED;
        scope = 2;
        //model = "\arp_objects2\models\117radio.p3d";
        displayName = "=TSS= Radio Rack";
        faction = "tss_units";
        vehicleClass = "TSS_OBJECTS";
        class AcreRacks {
            class Rack_1 {
                displayName = "COMM 1";
                componentname = "ACRE_VRC103";
                allowedPositions[] = {"external"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {};
            };
            class Rack_2: Rack_1 {
                name = "COMM 2";
            };
        };
    };
};
