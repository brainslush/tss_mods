#include "script_component.hpp"
/*
 * Author: brainslush
 * determine loadout items
 *
 * Arguments:
 * 0: configPath <CONFIG>
 * 1: property <STRING>
 * 2: type <STRING>
 * 3: saveVar <STRING>
 * 4: arsenal list <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [...] call tss_mods_units_fnc_getLoadoutData
 *
 * Public: No
*/

params ["_unit", "_configPath", "_property", "_type", ["_saveVar", "", [""]], ["_arsenalList", "", [""]]];

([_configPath, _property, _type] call FUNC(getConfigData)) params [["_availableList", [], [[]]],["_groupList", [], [[]]]];

// append arsenal whitelist
if (_arsenalList != "") then {
    private _varName = ["tss_arsenalList", _arsenalList] joinString "_";
    private _whitelist = _unit getVariable [_varName,[]];
    _whitelist append _availableList;
    _unit setVariable [_varName,_whiteList];
};
//_availableList = _availableList apply {toLower _x};

// check if item is in list, if not revert to default
if (_availableList isEqualTo []) then {
    ["", ""];
} else {
    private _default = selectRandom _availableList;
    private _item = if (_saveVar != "") then {
        private _savedGear = if (tolower _saveVar == "itemgroup") then {
            private _groupTest = _groupList arrayIntersect _groupList;
            private _return = if (count _groupTest == 1) then {
                private _return = LOADGEARITEM(_property,_groupList select 0,_type,_default);
                _return;
            } else {
                _default;
                ERROR_WITH_TITLE("Loadoutkonfiguration","Itemgroup kann nicht mit mehreren Gruppen verwendet werden");
            };
            _return;
        } else {
            private _return = LOADGEARITEM(_property,_saveVar,_type,_default);
            _return;
        };
        private _findId = _availableList find _savedGear;
        //TRACE_4("",_findId,_savedGear,_availableList,_groupList);
        if (_findId != -1) then {
            [_savedGear, _groupList select _findId];
        } else {
            [_default, _groupList select 0];
        };
    } else {
        [_default, _groupList select 0];
    };
    _item;
};
