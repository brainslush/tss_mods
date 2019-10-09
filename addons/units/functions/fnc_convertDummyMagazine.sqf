#include "script_component.hpp"
/*
 * Author: brainslush
 * Converts dummy magazines
 *
 * Arguments:
 * 0: Target <OBJECT>
 * 1: Source <OBJECT>
 * 2: Magazine <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call tss_mods_units_fnc_convertDummyMagazine
 *
 * Public: No
*/

params ["", "_assistant", "_magazine"];

//TRACE_1("",_this);

private _ammo = getText(configFile >> "CfgMagazines" >> _magazine >> "ammo");
private _mass = getNumber(configFile >> "CfgMagazines" >> _magazine >> "mass");
private _dummyClass = if (_ammo isKindOf "MissileCore" || {_ammo isKindOf "RocketCore"}) then {QGVAR(dummymissile)} else {QGVAR(dummymagazine)};
private _massdummy = getNumber(configFile >> "CfgMagazines" >> _dummyClass >> "mass");

//TRACE_1("",_dummyClass);
{
    //TRACE_1("",_x);
    private _countdummy = {
        _x params ["_item"];
        private _isClass = (_item == _dummyClass);
        //TRACE_2("",_isClass,_dummyClass);
        if (_isClass) then {
            switch (_forEachIndex) do {
                case 0: {_assistant removeItemFromUniform _item};
                case 1: {_assistant removeItemFromVest _item};
                case 2: {_assistant removeItemFromBackpack _item};
            };
        };
        _isClass
    } count _x;
    
    private _count = floor(_countdummy * _massdummy / _mass);
    //TRACE_4("",_countdummy,_count,_massdummy,_mass);
    for "_i" from 0 to _count - 1 do {
        switch (_forEachIndex) do {
            case 0: {_assistant addItemToUniform _magazine};
            case 1: {_assistant addItemToVest _magazine};
            case 2: {_assistant addItemToBackpack _magazine}
        };
    };

    if (_count > 0) then {
        private _name = getText (configFile >> "CfgMagazines" >> _magazine >> "displayname");
        ["Dummies zu " + str(_count) + " " + _name + " konvertiert"] call CBA_fnc_notify;
    };
} forEach [
    magazinesAmmoCargo uniformContainer _assistant,
    magazinesAmmoCargo vestContainer _assistant,
    magazinesAmmoCargo backpackContainer _assistant
];
