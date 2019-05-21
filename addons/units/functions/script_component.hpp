#include "\x\TSS_UNITS\addons\units\script_component.hpp"

#define SAVELAYOUT(saveVar,property,type,data) \
    profileNamespace setVariable [ARR_2(QUOTE(##TSS##_##saveVar##_##property##_##type)),data)]
