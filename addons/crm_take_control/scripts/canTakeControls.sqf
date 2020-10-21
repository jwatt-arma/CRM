params ["_unit"];
private ["_vehicle", "_isPilot", "_isLocal", "_isCopilot", "_return"];

_return = true;
_isInControl = [_unit] call crm_common_fnc_hasPilotControls;
_isPilot = [_unit] call crm_common_fnc_isPilot;
_isCopilot = [_unit] call crm_common_fnc_isCopilot;

// To take control, the player must be either the pilot or copilot and
// must not already have the controls
if (_isInControl or (not (_isPilot or _isCopilot))) then {
	_return = false
};

_return