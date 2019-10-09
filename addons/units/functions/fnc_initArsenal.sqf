#include "script_component.hpp"
/*
 * Author: brainslush
 * Initialize a arsenal for specific loadout configurations.
 *
 * Arguments:
 * 0: Target <OBJECT>
 * 1: Type <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_player, 0] call tss_mods_units_fnc_initArsenal
 *
 * Public: Yes
*/

params[
    ["_object", objNull],
    ["_type", "", [""]]
];

if (_object isEqualTo objNull) exitWith {};

switch (toLower _type) do {
    // magazine arsenal
    case "magazines": {
        private _action = [
            QGVAR(MagazineArsenal), "Magazine Arsenal", "", {
                [player, _target] call FUNC(cacheVirtualItems);

                private _items = GETPRVAR(GVAR(magazineList),[]);
                [_target, _items, false] call ace_arsenal_fnc_addVirtualItems;

                GVAR(ArsenalTypeOpen) = "magazines";
                [_target, player] call ace_arsenal_fnc_openBox;
            }, {true}
        ] call ACE_interact_menu_fnc_createAction;
        [_object, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
    };
    // tss arsenal
    case "tss": {
        private _action = [
            QGVAR(TSSArsenal), "TSS Arsenal", "", {
                [player, _target] call FUNC(cacheVirtualItems);

                private _list = GETPRVAR(GVAR(weaponList),[]);
                _list append GETPRVAR(GVAR(gearList),[]);
                _list append GETPRVAR(GVAR(itemList),[]);
                _list append GETPRVAR(GVAR(magazineList),[]);
                _list append GETPRVAR(GVAR(attachmentList),[]);
                [_target, _list, false] call ace_arsenal_fnc_addVirtualItems;

                [_target, player] call ace_arsenal_fnc_openBox;
            }, {true}
        ] call ACE_interact_menu_fnc_createAction;
        [_object, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
    };
};
