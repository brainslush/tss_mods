"((configName(_x) splitString '_') select [0,2]) joinString '_'== 'milgp_u'" configClasses (configFile >> "CfgWeapons") apply {
    [configName _x, configName(inheritsFrom _x)]
};