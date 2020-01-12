#include "script_component.hpp"

[
    "TSS Module", "Loadoutarsenal anfügen",
    {
        params ["", "_object"];
        if isNil "_object" exitWith {["Kein Objekt gewählt"] call CBA_fnc_notify};
        [QEGVAR(units,initPersonalBox), [_object]] call CBA_fnc_globalEventJIP;
    }
] call zen_custom_modules_fnc_register;

[
    "TSS Module", "TSS-Arsenal anfügen",
    {
        params ["", "_object"];
        if isNil "_object" exitWith {["Kein Objekt gewählt"] call CBA_fnc_notify};
        [QEGVAR(units,initArsenal), [_object, "tss"]] call CBA_fnc_globalEventJIP;
    }
] call zen_custom_modules_fnc_register;

[
    "TSS Module", "Munitionsarsenal anfügen",
    {
        params ["", "_object"];
        if isNil "_object" exitWith {["Kein Objekt gewählt"] call CBA_fnc_notify};
        [QEGVAR(units,initPersonalBox), [_object, "magazines"]] call CBA_fnc_globalEventJIP;
    }
] call zen_custom_modules_fnc_register;

// Add muzzle zeus module
[
    QGVAR(setMuzzle), {
        TRACE_1("",_this);
        params ["", ["_state", "fire"]];
        player setVariable [QEGVAR(units,EdenMuzzle), _state];
        [player] call EFUNC(units,applyLoadout);
    }
] call CBA_fnc_addEventHandler;

[
    "TSS Module", "Schalldämpferoption ändern",
    {
        params ["", ["_object", objNull]];
        if (_object isEqualTo objNull) then {
            ["Option wir auf alle TSS-Einheiten angewendet!"] call CBA_fnc_notify;
        } else {
            if !(_object getVariable [QEGVAR(units,isTss), false]) exitWith {
                ["Ausgewählte Einheit ist keine TSS-Einheit!"] call CBA_fnc_notify;
            };
            ["Option wird auf Einheit " + str(name _object) + " angwendet!"] call CBA_fnc_notify;
        };
        GVAR(selectedUnit) = _object;
        [
            "Muzzle",
            [
                ["combo", "Muzzle", 
                [["silent", "fire"], [["Schalldämpfer", "", "", [1,1,1,1]], ["Feuerbremse", "", "", [1,1,1,1]]], 1]],
                ["combo", "Erneut ausrüten?",
                [[true, false], [["Ja", "", "", [1,0,0,1]], ["Nein", "", "", [1,0,0,1]]], 1]]
            ],{
                params ["_state", "_reequip"];
                if (GVAR(selectedUnit) isEqualTo objNull) then {
                    GVAR(jipEventId) = [QGVAR(setMuzzleAll), [GVAR(selectedUnit), _state, _reequip], GVAR(jipEventId)] call CBA_fnc_globalEventJIP;
                } else {
                    [QGVAR(setMuzzle), [GVAR(selectedUnit), _state, _reequip], GVAR(selectedUnit)] call CBA_fnc_targetEvent
                }
            }
        ] call zen_dialog_fnc_create;
    }
] call zen_custom_modules_fnc_register;
