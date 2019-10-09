#include "script_component.hpp"
/*
 * Author: brainslush
 * Add cls kit to unit
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Type <STRING>
 * 2: Forced <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call tss_mods_units_fnc_addMedKit
 *
 * Public: No
*/

if (is3den) exitWith {};

params ["_unit", ["_type", "clsbravo"], ["_forced", false], ["_clear", false]];

if (!_forced && {!(_unit getVariable [QGVAR(EdenClsB),false])}) exitWith {};

/*
private _hasKit = if (_unit getVariable [QGVAR(isTSS), false]) then {
    private _type = _unit getVariable [QGVAR(typeOf), typeOf _unit];
    private _backpackArray = getArray (configFile >> "CfgVehicles" >> _type >> "tss_backpacksContent");
    TRACE_2("",_type,_backpackArray);
    private _has = {
        // remove items from backpack if it is a med kit
        private _itemGroup = if (_x isEqualType []) then {_x select 0} else {_x};
        TRACE_1("",_itemGroup);
        private _found = _itemGroup find "medkit" != -1;
        if (_found) then {
            private _varName = ["TSS", MODSET, "Items", _itemGroup, _3denDaynight] joinString "_";
            private _oldKitContent = profileNamespace getVariable [_varName, []];
            TRACE_1("",_oldKitContent);
            {
                _x params ["_item", "_count"];
                for "_i" from 0 to (_count - 1) do {
                    _unit removeItemFromBackpack _item;
                };
            } forEach _oldKitContent
        };
        _found
    } count _backpackArray > 0;
    _has
} else {false};

// set medic variable
private _medicClass = _unit getVariable ["ace_medical_medicClass", -1];
_unit setVariable ["ace_medical_medicClass", 1 max _medicClass, true];

([_unit] call FUNC(getUnitParameters)) params ["", "","", "_3denDaynight", "", "", ""];
private _varName = ["TSS", MODSET, "Items", "medkit" + _type, _3denDaynight] joinString "_";
private _medKitContent = profileNamespace getVariable [_varName, []];

(getUnitLoadout _unit) params ["", "", "", "", "", "_backpackArray"];
_backpackArray params ["", "_backpackContent"];
_backpackFindContent = _backpackContent apply {_x select 0};

TRACE_2("",_medKitContent,_backpackContent);

private _full = false;
{
    _x params ["_item", "_newCount"];
    private _id = _backpackFindContent find _item;
    private _addCount = if (_id != -1 && {!_hasKit}) then {
        0 max (_newCount - ((_backpackContent select _id) select 1))
    } else {_newCount};
    TRACE_4("",_item,_addCount,_newCount);
    // add items to backpack
    for "_i" from 0 to (_addCount - 1) do {
        if (_unit canAddItemToBackpack _item) then {
            _unit addItemToBackpack _item;
        } else {
            _full = true;
        };
    };
} forEach _medKitContent;
*/

// set medic variable
private _medicClass = _unit getVariable ["ace_medical_medicClass", -1];
_unit setVariable ["ace_medical_medicClass", 1 max _medicClass, true];

if (_clear) then {
    private _medItems = [
        "ACE_fieldDressing",
        "ACE_packingBandage",
        "ACE_elasticBandage",
        "ACE_tourniquet",
        "ACE_morphine",
        "ACE_adenosine",
        "ACE_atropine",
        "ACE_epinephrine",
        "ACE_plasmaIV",
        "ACE_plasmaIV_500",
        "ACE_plasmaIV_250",
        "ACE_bloodIV",
        "ACE_bloodIV_500",
        "ACE_bloodIV_250",
        "ACE_salineIV",
        "ACE_salineIV_500",
        "ACE_salineIV_250",
        "ACE_quikclot",
        "ACE_personalAidKit",
        "ACE_surgicalKit",
        "ACE_bodyBag"
    ];

    (getUnitLoadout _unit) params ["", "", "", "", "", "_backpackArray"];
    _backpackArray params ["", "_backpackContent"];
    //TRACE_1("",_backpackContent);
    for "_i" from 0 to (count _backpackContent - 1) do {
        //TRACE_1("",_i);
        (_backpackContent select _i) params ["_item", "_count"];
        if (_item in _medItems) then {
            for "_j" from 1 to _count do {
                _unit removeItemFromBackpack _item;
            };
        };
    };
};


([_unit] call FUNC(getUnitParameters)) params ["", "","", "_3denDaynight", "", "", ""];
private _varName = ["TSS", MODSET, "Items", "medkit" + _type, _3denDaynight] joinString "_";
private _medKitContent = profileNamespace getVariable [_varName, []];

private _full = false;
{
    _x params ["_item", "_newCount"];
    // add items to backpack
    for "_i" from 0 to (_newCount - 1) do {
        if (_unit canAddItemToBackpack _item) then {
            _unit addItemToBackpack _item;
        } else {
            _full = true;
        };
    };
} forEach _medKitContent;

if (_full) then {["CLS Kit hat nicht komplett in den Rucksack gepasst"] call CBA_fnc_notify};
