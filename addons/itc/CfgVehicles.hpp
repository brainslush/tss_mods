class CfgVehicles {
    class UAV_02_base_F;
    class UAV_02_dynamicLoadout_base_F : UAV_02_base_F {
        class Turrets;
    };
    class B_UAV_02_dynamicLoadout_F : UAV_02_dynamicLoadout_base_F {
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class tss_uav_02_f : B_UAV_02_dynamicLoadout_F {
        faction = "tss_common";
        VEHCLASS("tss_autonomous");
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                turretInfoType = "ITC_Land_AR2I_RscOptics_UAV_gunner";
            };
        };
    };

    class UAV;
    class UAV_05_Base_F : UAV {
        class Turrets {
            class MainTurret;
        };
    };
    class tss_uav_05_f : UAV_05_Base_F {
        class SimpleObject {
            eden = 1;
            animate[] = {{"damagehide", 0}, {"engine_fire_l", 0}, {"engine_fire_right", 0}, {"weapons_bay_l_1", 0}, {"weapons_bay_l_2", 0}, {"weapons_bay_r_1", 0}, {"weapons_bay_r_2", 0}, {"weapons_rack_l_1", 0}, {"weapons_rack_l_2", 0}, {"weapons_rack_l_3", 0}, {"weapons_rack_r_1", 0}, {"weapons_rack_r_2", 0}, {"weapons_rack_r_3", 0}, {"gear_door_f_1", 0}, {"gear_door_f_2", 0}, {"gear_door_l_1", 0}, {"gear_door_l_2", 0}, {"gear_door_r_1", 0}, {"gear_door_r_2", 0}, {"gear_front_hydraulic_4", 0}, {"gear_front", 0}, {"gear_front_hydraulic_1", 0}, {"gear_front_hook", 0}, {"gear_front_hydraulic_2", 0}, {"gear_front_hydraulic_3", 0}, {"gear_front_stearing", 0}, {"gear_front_suspension", 0}, {"gear_front_suspension_1", 0}, {"gear_front_suspension_2", 0}, {"gear_rear_l", 0}, {"gear_rear_hydraulic_l_1", 0}, {"gear_rear_hydraulic_l_2", 0}, {"gear_rear_rotate_l", 0}, {"gear_rear_suspension_l", 0}, {"gear_rear_suspension_l_1", 0}, {"gear_rear_suspension_l_2", 0}, {"gear_rear_r", 0}, {"gear_rear_hydraulic_r_1", 0}, {"gear_rear_hydraulic_r_2", 0}, {"gear_rear_rotate_r", 0}, {"gear_rear_suspension_r", 0}, {"gear_rear_suspension_r_1", 0}, {"gear_rear_suspension_r_2", 0}, {"wheels_f", 0}, {"wheel_l", 0}, {"wheel_r", 0}, {"aileron_l", 0}, {"aileron_r", 0}, {"airbrake_l", 0}, {"airbrake_r", 0}, {"rudder_l", 0}, {"rudder_r", 0}, {"elevator_l_1", 0}, {"elevator_l_2", 0}, {"elevator_r_1", 0}, {"elevator_r_2", 0}, {"flap_l", 0}, {"flap_r", 0}, {"mainturret", 0}, {"maingun", -0.79}, {"collision_lights_l", 0}, {"collision_lights_r", 0}, {"collision_lights_c1_blinking", 0}};
            hide[] = {"clan", "zasleh", "gear_front_light", "zadni svetlo", "podsvit pristroju", "poskozeni"};
            verticalOffset = 1.79;
            verticalOffsetWorld = -0.064;
            init = "[this, '', []] call bis_fnc_initVehicle";
        };
        author = "TSS";
        scope = 2;
        displayName = "UCAV Sentinel";
        faction = "tss_common";
        VEHCLASS("tss_autonomous");
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                turretInfoType = "ITC_Land_AR2I_RscOptics_UAV_gunner";
            };
        };
    };

    class ITC_Land_B_UAV_AR2e;
    class tss_b_uav_01 : ITC_Land_B_UAV_AR2e {
        author = "TSS";
        faction = "tss_common";
        VEHCLASS("tss_autonomous");
    };
};
