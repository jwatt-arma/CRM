params ['_vehicle'];
private ['_value'];
_value = 1;
if ([_vehicle] call crm_hmd_fnc_isHmdOn) then {
	_value = 0;
};
[_vehicle, _value] call crm_hmd_fnc_setHmdOn;