params ['_vehicle'];
private ['_value'];
#include "defines.hpp"

_value = 1;
if ([_vehicle] call crm_hmd_fnc_isHmdYellow) then {
	_value = 0;
};
[_vehicle, _value] call crm_hmd_fnc_setHmdYellow;