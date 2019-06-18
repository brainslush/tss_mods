#include "..\script_component.hpp"

#define LOADLAYOUT(saveVar,property,type,data) \
    profileNamespace getVariable [ARR_2(QUOTE(##TSS##_##saveVar##_) + (parsingNamespace getVariable QGVARMAIN(Modset)) + QUOTE(##property##_##type),data)]

#define SAVELAYOUT(saveVar,property,type,data) \
    profileNamespace setVariable [ARR_2(QUOTE(##TSS##_##saveVar##_) + (parsingNamespace getVariable QGVARMAIN(Modset)) + QUOTE(##property##_##type),data)]
