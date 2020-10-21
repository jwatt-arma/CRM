private ["_vehicle", "_isPilot", "_canTakeControls"];

_vehicle = vehicle player;
_canTakeControls = [player] call crm_take_control_fnc_canTakeControls;
_isPilot = [player] call crm_common_fnc_isPilot;

// No need to do anything if player can't take controls
if (not _canTakeControls) then {
	exit;
};

if (_isPilot) then {
	// Lock and unlock controls to take controls back from copilot
	player action ["LockVehicleControl", _vehicle];
	player action ["UnlockVehicleControl", _vehicle];
} else {
	// Take controls
	player action ["TakeVehicleControl", _vehicle];
};