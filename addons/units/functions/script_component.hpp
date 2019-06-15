#include "\x\TSS_UNITS\addons\units\script_component.hpp"

#define LOADLAYOUT(saveVar,property,type,data) \
    profileNamespace getVariable [ARR_2(QUOTE(##TSS##_##saveVar##_) + GVAR(repository) + QUOTE(##property##_##type),data)]

#define SAVELAYOUT(saveVar,property,type,data) \
    profileNamespace setVariable [ARR_2(QUOTE(##TSS##_##saveVar##_) + GVAR(repository) + QUOTE(##property##_##type),data)]
