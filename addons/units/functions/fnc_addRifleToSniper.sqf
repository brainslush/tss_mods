#include "script_component.hpp"
/*
 * Author: brainslush
 * Add assault rifle to snipers backpack
 *
 * Arguments:
 * 0: Unit <STRING>
 * 1: Unit Class <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [ACE_player, "snp"] call tss_mods_units_fnc_addRifleToSniper
 *
 * Public: No
*/

params["_unit", "_unitc"];

if (!(local _unit)) exitWith {};
if (toLower _unitc isEqualTo "" && {!(tolower _unitc isEqualTo "snp")}) exitWith {};
if (!(backpack _unit isKindOf "ace_gunbag")) exitWith {};

private _gunbag = backpackContainer _unit;

private _backpackArray = _gunbag getVariable ["ace_gunbag_gunbagWeapon", []];
if (_backpackWeapon isEqualTo []) exitWith {};

// get weapon data for operator
([_unit] call FUNC(getUnitParameters)) params ["", "","_3denCamo", "_3denDaynight", "", "_3denMuzzle", "_3denBipod", "_type"];
private _configPath = configFile >> "CfgVehicles" >> "tss_recon_operator";
private _ret = [_unit, _configPath, "Primaries", _3denCamo, _3denDaynight, _3denMuzzle, _3denBipod, "operator", false] call FUNC(determineWeapon);
//TRACE_1("",_ret);

// change array to make it fit for ace.
_ret params ["_weapon", "_muzzle", "_pointer", "_optic", "_magA", "_magB", "_bipod"];
private _items = [_muzzle, _pointer, _optic, _bipod];
_magA params [["_magAClass", ""]];
_magB params [["_magBClass", ""]];
private _magazines = [_magAClass, _magBClass];
//TRACE_3("",_weapon,_items,_magazines);

private _mass = [_weapon, _items, _magazines] call ace_gunbag_fnc_calculateMass;
//TRACE_1("", _mass);

// add rifle magazine to unit
private _configPath = configFile >> "CfgVehicles" >> _type;
private _uniformContentConfig = getArray(_configPath >> "tss_uniformsContent");
private _vestContentConfig = getArray(_configPath >> "tss_vestsContent");
private _backpackContentConfig = getArray(_configPath >> "tss_backpacksContent");

//TRACE_4("",_configPath,_uniformContentConfig,_vestContentConfig,_backpackContentConfig);

private _magazine = _magA select 0;
{   
    private _containderId = _forEachIndex;
    {
        if (_x isEqualType []) then {
            _x params["_type", "_count"];
            if (_type == "primaryaltmagazines") then {
                for "_i" from 0 to _count - 1 do {
                    switch (_containderId) do {
                        case 0 : {_unit addItemToUniform _magazine;};
                        case 1 : {_unit addItemToVest _magazine;};
                        case 2 : {_unit addItemToBackpack _magazine;};
                    }
                }
            };
        };
    } forEach _x;
} forEach [_uniformContentConfig, _vestContentConfig, _backpackContentConfig];


// add virtual load
[_unit, _gunbag, _mass] call ace_movement_fnc_addLoadToUnitContainer;
_gunbag setVariable ["ace_gunbag_gunbagWeapon", [_weapon, _items, [_magA, _magB]], true];
