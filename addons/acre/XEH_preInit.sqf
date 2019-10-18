#include "script_component.hpp"

ADDON = true;

// set deafult channels
["ACRE_PRC148", "default", QUOTE(ADDON)] call acre_api_fnc_copyPreset;
["ACRE_PRC152", "default", QUOTE(ADDON)] call acre_api_fnc_copyPreset;
["ACRE_PRC117F", "default", QUOTE(ADDON)] call acre_api_fnc_copyPreset;

// Emergeny Channel
_channelId = 99;
_frequency = 100.00;
_name = "Emergency";
["ACRE_PRC148",QUOTE(ADDON),32,"label",_name] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148",QUOTE(ADDON),32,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148",QUOTE(ADDON),32,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152",QUOTE(ADDON),_channelId,"name",_name] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F",QUOTE(ADDON),_channelId,"name",_name] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;

// 4 Command Net
_channelId = 1;
_frequency = 35;
_name = "Cmd Net ";
for "_i" from 1 to 4 do {
    _frequency = _frequency + 0.125;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;

    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;
    _channelId = _channelId + 1;
};

// 4 CAS Net
_frequency = 36;
_name = "Cas Net ";
for "_i" from 1 to 4 do {
    _frequency = _frequency + 0.125;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;

    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;
    _channelId = _channelId + 1;
};

// 1 ATC Net
_frequency = 37;
_name = "ATC ";
for "_i" from 1 to 1 do {
    _frequency = _frequency + 0.125;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;

    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;
    _channelId = _channelId + 1;
};


// 1 Col Net
_frequency = 38;
_name = "Col Net ";
for "_i" from 1 to 1 do {
    _frequency = _frequency + 0.125;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;

    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;
    _channelId = _channelId + 1;
};

// 2 Log Nets
_frequency = 39;
_name = "Log Net ";
for "_i" from 1 to 2 do {
    _frequency = _frequency + 0.125;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;

    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;
    _channelId = _channelId + 1;
};

// 4 Fires Net
_frequency = 40;
_name = "Fires ";
for "_i" from 1 to 4 do {
    _frequency = _frequency + 0.125;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;

    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;
    _channelId = _channelId + 1;
};

// 2 SuCo Net
_frequency = 41;
_name = "SuCo Net ";
for "_i" from 1 to 2 do {
    _frequency = _frequency + 0.125;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;

    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;
    _channelId = _channelId + 1;
};

// 16 PTL Net
_frequency = 180; //200
_name = "Ptl Net ";
for "_i" from 1 to 16 do {
    _frequency = _frequency + 0.125;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;

    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;
    _channelId = _channelId + 1;
};


// 6 Air Nets
_frequency = 190; //210
_name = "Air Net ";
for "_i" from 1 to 6 do {
    _frequency = _frequency + 0.125;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;

    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;
    _channelId = _channelId + 1;
};

// 3 Convoy Nets
_frequency = 195; // 300
_name = "Convoy ";
for "_i" from 1 to 3 do {
    _frequency = _frequency + 0.125;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;

    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),_channelId,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;
    _channelId = _channelId + 1;
};

// 31 Team Nets
_frequency = 200; //500
_name = "Team Net ";
for "_i" from 1 to 31 do {
    _frequency = _frequency + 0.125;
    ["ACRE_PRC148",QUOTE(ADDON),_i,"label",_name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC148",QUOTE(ADDON),_i,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC148",QUOTE(ADDON),_i,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;

    ["ACRE_PRC152",QUOTE(ADDON),98 - 31 + _i,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),98 - 31 + _i,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC152",QUOTE(ADDON),98 - 31 + _i,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;

    ["ACRE_PRC117F",QUOTE(ADDON),98 - 31 + _i,"name", _name + str(_i)] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),98 - 31 + _i,"frequencyRX",_frequency] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F",QUOTE(ADDON),98 - 31 + _i,"frequencyTX",_frequency] call acre_api_fnc_setPresetChannelField;
    //_channelId = _channelId + 1;
};


// set frequencies
["ACRE_PRC148",QUOTE(ADDON)] call acre_api_fnc_setPreset;
["ACRE_PRC152",QUOTE(ADDON)] call acre_api_fnc_setPreset;
["ACRE_PRC117F",QUOTE(ADDON)] call acre_api_fnc_setPreset;

ADDON = false;
