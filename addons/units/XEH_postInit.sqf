#include "script_component.hpp"

/*
if (player getVariable [QGVAR(isTss),false]) then {
    private _action = [
        QGVAR(Loadout),
        "Loadout",
        "",
        {
            GVAR(PersonalArsenalOpen) = true;
            [player, player] call ace_arsenal_fnc_openBox;
        },
        {true;}
    ] call ACE_interact_menu_fnc_createAction;

    [
        player,
        1,
        ["ACE_SelfActions"],
        _action
    ] call ace_interact_menu_fnc_addActionToObject;

    private _items = GETMVAR(tss_arsenalList_unit,[]);
    [player, _items, false] call ace_arsenal_fnc_addVirtualItems;
};
*/

// rerun postinit with equip to ensure that units are equiped when you return from mission test
TRACE_1("", is3DEN);
if (is3DEN) then {
    call FUNC(reequip3Den);
};

