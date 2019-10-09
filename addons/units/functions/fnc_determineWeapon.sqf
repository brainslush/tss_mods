#include "script_component.hpp"
/*
 * Author: brainslush
 * Determine weapon from config and saved loadout
 *
 * Arguments:
 * 0: configPath <CONFIG>
 * 1: property <STRING>
 * 2: camo <STRING>
 * 3: daynight <STRING>
 * 4: muzzle <STRING>
 * 5: unit class <STRING>
 * 6: add to arsenal <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [...] call tss_mods_units_fnc_determineWeapon
 *
 * Public: No
*/

// weapon attachments sub function
private _getAttachment = {
    params [
        "_unit",
        "_property",
        "_subproperty",
        "_type",
        "_weaponGroup",
        ["_addToArsenal", true]
    ];
    _property = toLower _property;
    //TRACE_4("attachment",_property,_subproperty,_type,_weaponGroup);
    private _combinedProperty = [_property, _subproperty] joinString "";
    // get name of wepaon group
    private _varName = ["TSS", MODSET, _combinedProperty, _weaponGroup] joinString "_";
    private _className = profileNamespace getVariable [_varName, ""];
    // get attachments for the weapon group
    _varName = ["TSS", MODSET, _subproperty, _className, _type] joinString "_";
    private _availableList = profileNamespace getVariable [_varName, []];
    // save for arsenal
    if (_addToArsenal) then {
        private _whitelist = _unit getVariable ["tss_arsenalList_unit",[]];
        _whitelist append _availableList;
        _unit setVariable ["tss_arsenalList_unit",_whiteList];
    };
    private _return = if (_availableList isEqualTo []) then {
        "";
    } else {
        private _default =  _availableList select 0;
        private _item = if (_weaponGroup != "") then {
            private _savedGear = LOADGEARITEM(_combinedProperty,_weaponGroup,_type,_default);
            //TRACE_5("",_combinedProperty,_weaponGroup,_type,_savedGear,_availableList);
            private _findId = _availableList find (tolower _savedGear);
            if (_findId == -1) then {
                _default;
            } else {
                _savedGear;
            };
        } else {
            _default;
        };
        _item;
    };
    //TRACE_1("",_return);
    _return;
};

params ["_unit", "_configPath", "_property", "_camo", "_daynight", "_muzzle", "_bipod", "_unitc", ["_addToArsenal", true]];
//TRACE_6("getWeapon",_configPath,_property,_camo,_daynight,_muzzle,_unitc);

private _arsenalvar = if(_addToArsenal) then {"unit"} else {""};
([_unit, _configPath, _property, _camo, "itemgroup", _arsenalvar] call FUNC(getLoadoutData)) params [["_weapon","",[""]], ["_weaponGroup","",[""]]];
//private _savedWeapon = LOADGEARITEM(_property,_weaponGroup,_camo,_weapon);
private _weaponArray = [_weapon];
// get muzzles, optics, lasers modules
_weaponArray pushBack ([_unit, _property, "Muzzles", _muzzle, _weaponGroup] call _getAttachment);
_weaponArray pushBack ([_unit, _property, "Lasers", _daynight, _weaponGroup] call _getAttachment);
_weaponArray pushBack ([_unit, _property, "Optics", _daynight, _weaponGroup] call _getAttachment);
// get magazines

{
    private _varName = ["TSS_Magazines", MODSET, _weaponGroup, _weapon, _forEachIndex] joinString "_";
    private _array = profileNamespace getVariable [_varName, []];
    //TRACE_4("",_x,_varName,_addToArsenal,_array);
    if (_array isEqualTo []) then {
        _weaponArray pushBack [];
    } else {
        // add magazines to arsenal list

        //TRACE_3("",_x,_addToArsenal,_x == "Magazines" && {_addToArsenal});
        if (_x == "Magazines" && {_addToArsenal}) then {
            private _whitelist = _unit getVariable ["tss_arsenalList_unit",[]];
            _whitelist append _array;
            _unit setVariable ["tss_arsenalList_unit",_whiteList];
        };
        // determine magazine
        private _default = _array select 0;
        //TRACE_3("",_property,_x,_weapon);
        private _magazine = LOADGEARITEM((_property + _x),_weapon,"",_default);
        //TRACE_2("",_magazine,_array);
        if (!(_magazine in _array)) then {_magazine = _default;};
        private _count = getNumber(configFile >> "CfgMagazines" >> _magazine >> "count");
        _weaponArray pushBack [_magazine, _count];
        private _varName = [QUOTE(ADDON), _property, _x] joinString "_";
        //TRACE_2("",_varName,_magazine);
        missionNamespace setVariable [
            _varName, _magazine
        ];
    };
} forEach ["Magazines","Grenades"];
_weaponArray pushBack ([_unit, _property, "Bipods", _bipod, _weaponGroup] call _getAttachment);
_weaponArray;
