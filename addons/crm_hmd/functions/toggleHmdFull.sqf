params ['_vehicle'];
private ['_value'];
_value = 0;
if ([_vehicle] call crm_hmd_fnc_isHmdFull) then {
	_value = 1;
};
[_vehicle, _value] call crm_hmd_fnc_setHmdFull;