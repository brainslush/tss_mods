class CfgTSSLoadouts {
    class CfgUniforms {
        class infantry {
            class all {
                class vanilla {
                    uniforms[] = {
                        "U_B_CombatUniform_mcam",
                        "U_B_CombatUniform_mcam_tshirt",
                        "U_B_CombatUniform_mcam_worn",
                        "U_B_CombatUniform_mcam_vest",
                        "U_B_CTRG_2",
                        "U_B_CTRG_3",
                        "U_B_CTRG_1"
                    };
                };
            };
            class des: all {};
            class jgl: all {
                class vanilla: vanilla {
                    uniforms[] += {
                        "U_B_T_Soldier_SL_F",
                        "U_B_CTRG_Soldier_urb_2_F",
                        "U_B_CTRG_Soldier_urb_3_F",
                        "U_B_CTRG_Soldier_urb_1_F",
                        "U_B_T_Soldier_AR_F",
                        "U_B_T_Soldier_F"
                    };
                };
            };
            class mdt: all {};
            class snw: all {};
            class wdl: all {
                class vanilla: vanilla {
                    uniforms[] += {
                        "U_B_CombatUniform_vest_mcam_wdl_f",
                        "U_B_CombatUniform_tshirt_mcam_wdL_f",
                        "U_B_CombatUniform_mcam_wdl_f"
                    };
                };
            };
        };
        class helipilot {
            class all {
                class vanilla {
                    uniforms[] = {
                        "U_B_HeliPilotCoveralls"
                    };
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
        class planepilot {
            class all {
                class vanilla {
                    uniforms[] = {
                        "U_B_PilotCoveralls"
                    };
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
    };
    class CfgVests {
        class rifleman {
            #include "CfgVanillaVests.hpp"
        };
        class teamleader {
            #include "CfgVanillaVests.hpp"
        };
        class machinegunner {
            #include "CfgVanillaVests.hpp"
        };
        class grenadier {
            #include "CfgVanillaVests.hpp"
        };
        class marksman {
            #include "CfgVanillaVests.hpp"
        };
        class medic {
            #include "CfgVanillaVests.hpp"
        };
        class helipilot {
            class all {
                class vanilla {
                    vests[] = {
                        "V_TacVest_oli"
                    };
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
    };
    class CfgBackpacks {
        class small {
            class all {
                class vanilla {
                    backpacks[] = {
                        "B_AssaultPack_blk",
                        "B_AssaultPack_sgg",
                        "B_AssaultPack_khk",
                        "B_AssaultPack_rgr",
                        "B_AssaultPack_eaf_F",
                        "B_MU_AssaultPack_US_rgr",
                        "B_MU_AssaultPack_US_khk",
                        "B_MU_AssaultPack_US_sgg"
                    };
                };
            };
            class des: all {
                class vanilla: vanilla {
                    backpacks[] += {
                        "B_AssaultPack_cbr",
                        "B_AssaultPack_mcamo",
                        "B_MU_AssaultPack_US_mcamo"
                    };
                };
            };
            class jgl: all {
                class vanilla: vanilla {
                    backpacks[] += {
                        "B_AssaultPack_tna_F",
                        "B_MU_AssaultPack_US_tna"
                    };
                };
            };
            class mdt: all {
                class vanilla: vanilla {
                    backpacks[] += {
                        "B_AssaultPack_mcamo",
                        "B_MU_AssaultPack_US_mcamo"
                    };
                };
            };
            class snw: all {};
            class wdl: all {
                class vanilla: vanilla {
                    backpacks[] += {
                        "B_AssaultPack_wdl_F",
                        "B_AssaultPack_mcamo",
                        "B_MU_AssaultPack_US_mcamo"
                    };
                };
            };
        };
        class medium {
            class all {
                class vanilla {
                    backpacks[] = {
                        "B_TacticalPack_blk",
                        "B_Kitbag_rgr",
                        "B_TacticalPack_rgr"
                    };
                };
            };
            class des: all {
                class vanilla: vanilla {
                    backpacks[] += {
                        "B_Kitbag_tan",
                        "B_Kitbag_mcamo",
                        "B_Kitbag_cbr",
                        "B_TacticalPack_mcamo"
                    };
                };
            };
            class jgl: all {
                class vanilla: vanilla {
                    backpacks[] += {
                        "B_Kitbag_sgg",
                        "B_TacticalPack_oli"
                    };
                };
            };
            class mdt: all {
                class vanilla: vanilla {
                    backpacks[] += {
                        "B_Kitbag_tan",
                        "B_Kitbag_mcamo",
                        "B_Kitbag_cbr",
                        "B_TacticalPack_mcamo"
                    };
                };
            };
            class snw: all {};
            class wdl: all {
                class vanilla: vanilla {
                    backpacks[] += {
                        "B_Kitbag_sgg",
                        "B_TacticalPack_mcamo",
                        "B_TacticalPack_oli"
                    };
                };
            };
        };
        class large {
            class all {
                class vanilla {
                    backpacks[] = {
                        "B_Carryall_khk"
                    };
                };
            };
            class des: all {
                class vanilla: vanilla {
                    backpacks[] += {
                        "B_Carryall_mcamo"
                    };
                };
            };
            class jgl: all {
                class vanilla: vanilla {
                    backpacks[] += {
                        "B_Carryall_oli",
                        "B_Carryall_green_F",
                        "B_Carryall_eaf_F"
                    };
                };
            };
            class mdt: all {
                class vanilla: vanilla {
                    backpacks[] += {
                        "B_Carryall_taiga_F",
                        "B_Carryall_oli",
                        "B_Carryall_mcamo"
                    };
                };
            };
            class snw: all {
                class vanilla: vanilla {
                    backpacks[] += {
                        "B_Carryall_oucamo"
                    };
                };
            };
            class wdl: all {
                class vanilla: vanilla {
                    backpacks[] += {
                        "B_Carryall_wdl_F",
                        "B_Carryall_taiga_F",
                        "B_Carryall_oli",
                        "B_Carryall_green_F",
                        "B_Carryall_eaf_F"
                    };
                };
            };
        };
        class xlarge {
            class all {
                class vanilla {
                    backpacks[] = {"B_Bergen_mcamo"};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
        class darter {
            class all {
                class vanilla {
                    backpacks[] = {"B_UAV_01_backpack_F"};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
    };
    class CfgHelmets {
        class infantry {
            class all {
                class vanilla {
                    helmets[] = {
                        "H_HelmetB_snakeskin",
                        "H_HelmetSpecB_snakeskin",
                        "H_HelmetB_light_snakeskin",
                        "H_MU_HelmetB_light2_snakeskin"
                    };
                };
            };
            class des: all {
                class vanilla: vanilla {
                    helmets[] = {
                        "H_HelmetB_camo",
                        "H_HelmetB_desert",
                        "H_HelmetB_grass",
                        "H_HelmetB_sand",
                        "H_HelmetSpecB_paint1",
                        "H_HelmetSpecB_paint2",
                        "H_HelmetSpecB_sand",
                        "H_HelmetB_light_desert",
                        "H_HelmetB_light_grass",
                        "H_HelmetB_light_sand",
                        "H_MU_HelmetB_light2_desert",
                        "H_MU_HelmetB_light2_grass",
                        "H_MU_HelmetB_light2_sand"
                    };
                };
            };
            class jgl: all {
                class vanilla: vanilla {
                    helmets[] = {
                        "H_HelmetB_tna_F",
                        "H_HelmetB_Enh_tna_F",
                        "H_HelmetB_Light_tna_F",
                        "H_MU_HelmetB_light2_tropic"
                    };
                };
            };
            class mdt: all {
                class vanilla: vanilla {
                    helmets[] = {
                        "H_HelmetB_camo",
                        "H_HelmetB_desert",
                        "H_HelmetB_grass",
                        "H_HelmetSpecB_paint1",
                        "H_HelmetSpecB_paint2",
                        "H_HelmetB_light_desert",
                        "H_HelmetB_light_grass",
                        "H_MU_HelmetB_light2_desert",
                        "H_MU_HelmetB_light2_grass"
                    };
                };
            };
            class snw: all {};
            class wdl: all {
                class vanilla: vanilla {
                    helmets[] = {
                        "H_HelmetB_plain_wdl",
                        "H_HelmetSpecB_wdl",
                        "H_HelmetB_light_wdl",
                        "H_MU_HelmetB_light2_wdl"
                    };
                };
            };
        };
        class recon {
            class all {
                class vanilla {
                    helmets[] = {
                        "H_Watchcap_blk",
                        "H_Watchcap_cbr",
                        "H_Watchcap_camo",
                        "H_Watchcap_khk",
                        "H_Booniehat_khk_hs",
                        "H_Cap_oli_hs",
                        "H_HeadSet_black_F",
                        "H_MilCap_mcamo",
                        "H_Shemag_olive",
                        "H_ShemagOpen_tan"
                    };
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
        class caps {
            class all {
                class vanilla {
                    helmets[] = {
                        "H_Cap_oli_hs",
                        "H_HeadSet_black_F",
                        "H_MilCap_mcamo"
                    };
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
    };
    class CfgGlasses {
        class glasses {
            class all {
                class vanilla {
                    glasses[] = {
                        "",
                        "G_Aviator",
                        "G_Shades_Black",
                        "G_Shades_Blue",
                        "G_Shades_Red",
                        "G_Shades_Green",
                        "G_Bandanna_beast",
                        "G_Bandanna_blk",
                        "G_Bandanna_khk",
                        "G_Bandanna_oli",
                        "G_Bandanna_shades",
                        "G_Bandanna_tan",
                        "G_Spectacles",
                        "G_Sport_Red",
                        "G_Sport_Blackyellow",
                        "G_Sport_BlackWhite",
                        "G_Sport_Checkered",
                        "G_Sport_Blackred",
                        "G_Sport_Greenblack",
                        "G_Squares_Tinted",
                        "G_Squares",
                        "G_Spectacles_Tinted"
                    };
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
    };
    class CfgPrimaries {
        class rifle {
            class all {
                class vanilla {
                    primaries[] = {
                        "arifle_Mk20_plain_F",
                        "arifle_Mk20_F",
                        "arifle_Mk20C_plain_F",
                        "arifle_Mk20C_F",
                        "arifle_SPAR_01_blk_F",
                        "arifle_TRG20_F"
                    };
                    defaultMagazine[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag"};
                    magazineRange[] = {{0,30},{0,0}};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {
                class vanilla: vanilla {
                    primaries[] += {
                        "arifle_SPAR_01_khk_F"
                    };
                    defaultMagazine[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag"};
                    magazineRange[] = {{0,30},{0,0}};
                };
            };
            muzzles = "muzzle556";
            lasers = "laser";
            optics = "opticsRifle";
            bipods = "bipod";
        };
        class riflegl {
            class all {
                class vanilla {
                    primaries[] = {
                        "arifle_Mk20_GL_plain_F",
                        "arifle_Mk20_GL_F",
                        "arifle_SPAR_01_GL_blk_F",
                        "arifle_TRG21_GL_F"
                    };
                    defaultMagazine[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","1Rnd_HE_Grenade_shell"};
                    magazineRange[] = {{0,30},{0,1}};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
            muzzles = "muzzle556";
            lasers = "laser";
            optics = "opticsRifle";
        };
        class lmg {
            class all {
                class vanilla {
                    primaries[] = {"LMG_03_F"};
                    defaultMagazine[] = {"200Rnd_556x45_Box_Red_F"};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
            muzzles = "muzzle556";
            lasers = "laser";
            optics = "opticsRifle";
        };
        class ar {
            class all {
                class vanilla {
                    primaries[] = {"arifle_SPAR_02_blk_F"};
                    defaultMagazine[] = {"150Rnd_556x45_Drum_Mag_Tracer_F"};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
            muzzles = "muzzle556";
            lasers = "laser";
            optics = "opticsRifle";
            bipods = "bipod";
        };
        class mmg {
            class all {
                class vanilla {
                    primaries[] = {"LMG_Zafir_F"};
                    defaultMagazine[] = {"150Rnd_762x54_Box_Tracer"};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
            muzzles = "muzzle762";
            lasers = "laser";
            optics = "opticsMmg";
        };
        class dmr {
            class all {
                class vanilla {
                    primaries[] = {"srifle_EBR_F"};
                    defaultMagazine[] = {"20Rnd_762x51_Mag"};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
            muzzles = "muzzle762";
            lasers = "laser";
            optics = "opticsDmr";
            bipods = "bipod";
        };
        class sniper {
            class all {
                class vanilla {
                    primaries[] = {"srifle_DMR_02_F"};
                    defaultMagazine[] = {"ACE_10Rnd_338_300gr_HPBT_Mag"};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
            muzzles = "muzzle338";
            lasers = "laser";
            optics = "opticsSniper";
            bipods = "bipod";
        };
    };
    class CfgSecondaries {
        class pistol {
            class all {
                class vanilla {
                    secondaries[] = {
                        "hgun_P07_F",
                        "hgun_Rook40_F"
                    };
                    defaultMagazine[] = {"16Rnd_9x21_Mag"};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
    };
    class CfgLaunchers {
        class singleUse {
            class all {
                class vanilla {
                    launchers[] = {"launch_NLAW_F"};
                };
                defaultMagazine[] = {""};
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
        class at {
            class all {
                class vanilla {
                    launchers[] = {"launch_MRAWS_green_rail_F"};
                };
                defaultMagazine[] = {"MRAWS_HEAT_F"};
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
        class gat {
            class all {
                class vanilla {
                    launchers[] = {"launch_O_Titan_short_F"};
                };
                defaultMagazine[] = {"Titan_AT"};
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
        class aa {
            class all {
                class vanilla {
                    launchers[] = {"launch_O_Titan_F"};
                };
                defaultMagazine[] = {"Titan_AA"};
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
    };
    class CfgMuzzles {
        class muzzle556 {
            class silent {
                class vanilla {
                    muzzles[] = {
                        "muzzle_snds_m",
                        "muzzle_snds_m_khk_f",
                        "muzzle_snds_m_snd_f"
                    };
                };
            };
            class fire {
                class ace {
                    muzzles[] = {"ace_muzzle_mzls_l"};
                };
            };
        };
        class muzzle762 {
            class silent {
                class vanilla {
                    muzzles[] = {
                        "muzzle_snds_b",
                        "muzzle_snds_b_arid_f",
                        "muzzle_snds_b_khk_f",
                        "muzzle_snds_b_lush_f",
                        "muzzle_snds_b_snd_f"
                    };
                };
            };
            class fire {
                class ace {
                    muzzles[] = {"ace_muzzle_mzls_b"};
                };
            };
        };
        class muzzle338 {
            class silent {
                class vanilla {
                    muzzles[] = {"muzzle_snds_338_black"};
                };
            };
        };
    };
    class CfgOptics {
        class opticsRifle {

            #define rifleoptics \
            "ace_optic_arco_2d",\
            "optic_yorris",\
            "optic_aco_grn",\
            "optic_aco",\
            "optic_holosight_blk_f",\
            "optic_holosight_khk_f",\
            "optic_holosight",\
            "optic_holosight_arid_f",\
            "optic_holosight_lush_f",\
            "ace_optic_mrco_2d",\
            "ace_optic_hamr_2d"

            class day {
                class vanilla {
                    optics[] = {
                        rifleoptics
                    };
                };
            };
            class night {
                class vanilla {
                    optics[] = {
                        rifleoptics
                    };
                };
            };
            class both {
                class vanilla {
                    optics[] = {
                        rifleoptics
                    };
                };
            };
        };
        class opticsMmg {
            class day {
                class vanilla {
                    optics[] = {
                        rifleoptics
                    };
                };
            };
            class night {
                class vanilla {
                    optics[] = {
                        rifleoptics,
                        "optic_nightstalker"
                    };
                };
            };
            class both {
                class vanilla {
                    optics[] = {
                        rifleoptics,
                        "optic_nightstalker"
                    };
                };
            };
        };
        class opticsDmr {
            class day {
                class vanilla {
                    optics[] = {
                        "optic_dms",
                        "optic_dms_ghex_f",
                        "optic_khs_blk",
                        "optic_khs_hex",
                        "optic_khs_tan",
                        "ace_optic_sos_2d"
                    };
                };
            };
            class night {
                class vanilla {
                    optics[] = {
                        "optic_nightstalker"
                    };
                };
            };
            class both {
                class vanilla {
                    optics[] = {
                        "optic_dms",
                        "optic_dms_ghex_f",
                        "optic_khs_blk",
                        "optic_khs_hex",
                        "optic_khs_tan",
                        "ace_optic_sos_2d",
                        "optic_nightstalker"
                    };
                };
            };
        };
        class opticsSniper {
            class day {
                class vanilla {
                    optics[] = {
                        "optic_lrps",
                        "optic_lrps_tna_f"
                    };
                };
            };
            class night {
                class vanilla {
                    optics[] = {
                        "optic_nightstalker",
                        "optic_tws"
                    };
                };
            };
            class both {
                class vanilla {
                    optics[] = {
                        "optic_lrps",
                        "optic_lrps_tna_f",
                        "optic_nightstalker",
                        "optic_tws"
                    };
                };
            };
        };
    };
    class CfgLasers {
        class laser {
            class night {
                class vanilla {
                    lasers[] = {
                        "acc_pointer_ir",
                        ""
                    };
                };
            };
            class day {
                class ace {
                    lasers[] = {
                        "ace_acc_pointer_green",
                        ""
                    };
                };
            };
            class both {
                class vanilla {
                    lasers[] = {
                        "acc_pointer_ir",
                        ""
                    };
                };
            };
        };
    };
    class CfgBipods {
        class bipod {
            class bipod {
                class vanilla {
                    bipods[] = {
                        "bipod_01_f_blk",
                        "bipod_02_f_arid",
                        "bipod_03_f_blk",
                        "bipod_02_f_blk",
                        "bipod_02_f_hex",
                        "bipod_01_f_khk",
                        "bipod_02_f_lush",
                        "bipod_01_f_mtp",
                        "bipod_03_f_oli",
                        "bipod_01_f_snd",
                        "bipod_02_f_tan"
                    };
                };
            };
        };
    };
    class CfgNVGs {
        class nvg {
            class night {
                class vanilla {
                    nvgs[] = {"ACE_NVG_Gen4"};
                };
            };
            class both {
                class vanilla {
                    nvgs[] = {"ACE_NVG_Gen4"};
                };
            };
        };
    };
    class CfgBinoculars {
        class binocs {
            class all {
                class vanilla {
                    binoculars[] = {"Binocular"};
                };
            };
            class day: all {};
            class night: all {};
            class both: all {};
        };
        class rangefinder {
            class all {
                class ace {
                    binoculars[] = {"ACE_Vector"};
                };
            };
            class day: all {};
            class night: all {};
            class both: all {};
        };
        class laserdesignator {
            class all {
                class vanilla {
                    binoculars[] = {"Laserdesignator"};
                };
            };
            class day: all {};
            class night: all {};
            class both: all {};
        };
    };
    class CfgMaps {
        class map {
            class all {
                class vanilla {
                    maps[] = {"ItemMap"};
                };
            };
        };
    };
    class CfgCompass {
        class compass {
            class all {
                class vanilla {
                    compass[] = {"ItemCompass"};
                };
            };
        };
    };
    class CfgWatches {
        class watch {
            class all {
                class watch {
                    watches[] = {
                        "ItemWatch",
                        "ACE_Altimeter"
                    };
                };
            };
        };
    };
    class CfgGPS {
        class gps {
            class all {
                class ace {
                    gps[] = {};
                };
            };
        };
        class android {
            class all {
                class ace {
                    gps[] = {};
                };
            };
        };
        class tablet {
            class all {
                class ace {
                    gps[] = {};
                };
            };
        };
        class uavterminalB {
            class all {
                class vanilla {
                    gps[] = {"B_UavTerminal"};
                };
            };
        };
        class uavterminalO {
            class all {
                class vanilla {
                    gps[] = {"O_UavTerminal"};
                };
            };
        };
        class uavterminalI {
            class all {
                class vanilla {
                    gps[] = {"I_UavTerminal"};
                };
            };
        };
    };
    class CfgItems {
        class primarymagazines {
            class all {
                class base {
                    items[] = {"primarymagazines"};
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class primarygrenades {
            class all {
                class base {
                    items[] = {"primarygrenades"};
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class secondarymagazines {
            class all {
                class base {
                    items[] = {"secondarymagazines"};
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class launchermagazines {
            class all {
                class base {
                    items[] = {"launchermagazines"};
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class tablet {
            class all {
                class vanilla {
                    items[] = {};
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class fak {
            class all {
                class ace {
                    items[] = {
                        {"ACE_tourniquet", 2},
                        {"ACE_packingBandage", 8},
                        {"ACE_elasticBandage", 8},
                        {"ACE_quikclot", 5},
                        {"ACE_morphine", 2},
                        {"ACE_epinephrine", 2}
                    };
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class clskit {
            class all {
                class ace {
                    items[] = {
                        {"ACE_tourniquet", 5},
                        {"ACE_packingBandage", 30},
                        {"ACE_elasticBandage", 30},
                        {"ACE_quikclot", 30},
                        {"ACE_morphine", 10},
                        {"ACE_epinephrine", 10},
                        {"ACE_salineIV_250", 10}
                    };
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class ptmkit {
            class all {
                class ace {
                    items[] = {
                        {"ACE_tourniquet", 5},
                        {"ACE_packingBandage", 30},
                        {"ACE_elasticBandage", 30},
                        {"ACE_quikclot", 30},
                        {"ACE_morphine", 10},
                        {"ACE_epinephrine", 10},
                        {"ACE_salineIV_250", 10}
                    };
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class ptdkit {
            class all {
                class ace {
                    items[] = {
                        {"ACE_tourniquet", 5},
                        {"ACE_packingBandage", 30},
                        {"ACE_elasticBandage", 30},
                        {"ACE_quikclot", 30},
                        {"ACE_morphine", 10},
                        {"ACE_epinephrine", 10},
                        {"ACE_salineIV_250", 10}
                    };
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class maptool {
            class all {
                class ace {
                    items[] = {{"ACE_MapTools",1}};
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class markers {
            class day {
                class vanace {
                    items[] = {{"SmokeShellPurple", 2}};
                };
            };
            class night {
                class vanace {
                    items[] = {
                        {"ACE_IR_Strobe_Item", 1},
                        {"ACE_Flashlight_XL50", 1},
                        {"ACE_Chemlight_IR", 2},
                        {"ACE_Chemlight_UltraHiOrange", 2}
                    };
                };
            };
            class both {
                class vanace {
                    items[] = {
                        {"ACE_IR_Strobe_Item", 1},
                        {"ACE_Flashlight_XL50", 1},
                        {"ACE_Chemlight_IR", 1},
                        {"ACE_Chemlight_UltraHiOrange", 1},
                        {"SmokeShellPurple", 1}
                    };
                };
            };
        };
        class cableties {
            class all {
                class ace {
                    items[] = {{"ACE_CableTie", 2}};
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class grenades {
            class day {
                class ace {
                    items[] = {
                        {"SmokeShell", 2},
                        {"ACE_M84", 2},
                        {"HandGrenade", 2}
                    };
                };
            };
            class night {
                class ace {
                    items[] = {
                        {"ACE_M84", 2},
                        {"HandGrenade", 2}
                    };
                };
            };
            class both {
                class ace {
                    items[] = {
                        {"SmokeShell", 2},
                        {"ACE_M84", 2},
                        {"HandGrenade", 2}
                    };
                };
            };
        };
        class markervest {
            class day {
                class vanace {
                    items[] = {{"SmokeShellPurple", 1}};
                };
            };
            class night {
                class vanace {
                    items[] = {
                        {"ACE_Chemlight_IR", 1},
                        {"ACE_Chemlight_UltraHiOrange", 1},
                        {"SmokeShellPurple", 1}
                    };
                };
            };
            class both {
                class vanace {
                    items[] = {
                        {"ACE_Chemlight_IR", 1},
                        {"ACE_Chemlight_UltraHiOrange", 1},
                        {"SmokeShellPurple", 1}
                    };
                };
            };
        };
        class anprc117 {
            class all {
                class acre {
                    items[] = {{"ACRE_PRC117F",1}};
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class anprc148 {
            class all {
                class acre {
                    items[] = {{"ACRE_PRC148",1}};
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class anprc152 {
            class all {
                class acre {
                    items[] = {{"ACRE_PRC152",1}};
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class dmrkit {
            class all {
                class ace {
                    items[] = {
                        {"ACE_Kestrel4500",1},
                        {"ACE_RangeCard",1}
                    };
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class sniperkit {
            class all {
                class ace {
                    items[] = {
                        {"ACE_Kestrel4500",1},
                        {"ACE_ATragMX",1},
                        {"ACE_RangeCard",1}
                    };
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class spotterkit {
            class all {
                class ace {
                    items[] = {
                        {"ACE_Kestrel4500",1},
                        {"ACE_ATragMX",1},
                        {"ACE_RangeCard",1}
                    };
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class detector {
            class all {
                class ace {
                    items[] = {{"ACE_VMH3",1}};
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class breacherkit {
            class all {
                class ace {
                    items[] = {
                        {"ACE_DefusalKit",1},
                        {"ACE_EntrenchingTool",1},
                        {"ACE_wirecutter",1},
                        {"ACE_Clacker",1},
                        {"ACE_SpraypaintRed",1},
                        {"DemoCharge_Remote_Mag",4}
                    };
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class pafkit {
            class all {
                class ace {
                    items[] = {
                        {"ACE_DefusalKit",1},
                        {"ACE_EntrenchingTool",1},
                        {"ACE_SpraypaintRed",1}
                    };
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class defkit {
            class all {
                class ace {
                    items[] = {
                        {"ACE_DefusalKit",1},
                        {"ACE_EntrenchingTool",1},
                        {"ACE_M26_Clacker",1},
                        {"DemoCharge_Remote_Mag",4}
                    };
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
    };
};
