params ['_vehicle'];
private ['_value'];
#include "defines.hpp"
_value = [_vehicle] call crm_hmd_fnc_getHmdBright;
_vehicle setUserMFDValue [MFD_USER_ALPHA, (_value - 0.05) max 0];