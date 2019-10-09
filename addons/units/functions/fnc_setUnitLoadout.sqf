#include "script_component.hpp"
/*
 * Author: brainslush
 * Customized setUnitLoadout to prevent overfilled containers.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Loadout <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [ACE_player, [...]] call tss_mods_units_fnc_setUnitLayout
 *
 * Public: No
*/

params ["_unit", "_loadout"];

_loadout params ["_primaryArray", "_launcherArray", "_secondaryArray", "_uniformArray", "_vestArray", "_backpackArray"];

// check if attachments fit on weapon
{
    _x params [["_weapon", ""], ["_silencer", ""], ["_pointer", ""], ["_optic", ""], "", "", ["_bipod", ""]];
    if (_weapon != "") then {
        private _compatibleList = [_weapon] call CBA_fnc_compatibleItems;
        private _loadoutIndex = _forEachIndex;
        {
            if (_x != "" && {!(configName (configFile >> "CfgWeapons" >> _x) in _compatibleList)}) then {
                (_loadout select _loadoutIndex) set [_forEachIndex + 1, ""];
            };
        } forEach [_silencer, _pointer, _optic, "", "", _bipod];
    };
} forEach [_primaryArray, _launcherArray, _secondaryArray];

// check for overflowing containers
_uniformArray params [["_uniform", ""], ["_uniformContent", []]];
_vestArray params [["_vest", ""], ["_vestContent", []]];
_backpackArray params [["_backpack", ""], ["_backpackContent", []]];

private _uniformSize = getContainerMaxLoad _uniform;
private _vestSize = getContainerMaxLoad _vest;
private _backpackSize = getContainerMaxLoad _backpack;
//TRACE_3("",_uniformSize,_vestSize,_backpackSize);

private _remainingContent = [];
{
    private _containerId = _forEachIndex;
    _x params ["_class", "_content", "_maxLoad"];
    if (_class != "") then {
        private _newContent = [];
        private _overflow = false;

        {
            _x params ["_item", "_count", ["_rounds",-1]];
            //TRACE_3("",_item,_count,_rounds);
            private _mass = if (_rounds == -1) then {
                getNumber(configfile >> "CfgWeapons" >> _item >> "ItemInfo" >> "mass");
            } else {
                getNumber(configfile >> "CfgMagazines" >> _item >> "mass");
            };
            _maxLoad = _maxLoad - _mass * _count;
            //TRACE_2("",_mass,_maxLoad);
            if (!_overflow) then {
                if (_maxLoad >= 0) then {
                    _newContent pushBack _x
                } else {
                    _overflow = true;
                    private _newCount = _count - ceil (abs (_maxLoad) / _mass);
                    private _newArray = if (_rounds == -1) then {[_item, _newCount]} else {[_item, _newCount, _rounds]};
                    _newContent pushBack _newArray;
                };
            };
        } forEach _content;

        if (_overflow) then {
            private _containerStr = ["deine Uniform", "deine Veste", "deinen Rucksack"] select _containerId;
            ["Es haben nicht alle Items in " + _containerStr + " gepasst!"] call CBA_fnc_notify;
            _containerStr = ["uniform", "vest", "backpack"] select _containerId;
            ERROR(typeOf _unit +  " has an overflowing " + _containerStr + ".");
        };
        _loadout set [3 + _forEachIndex, [_class, _newContent]];
    };
} forEach [[_uniform, _uniformContent, _uniformSize], [_vest, _vestContent, _vestSize], [_backpack, _backpackContent, _backpackSize]];



_unit setUnitLoadout _loadout;
