params ['_vehicle'];
private ['_turretIndex', '_return'];

// Get the index of the turret
_turretIndex = [_vehicle] call crm_common_fnc_getCopilotTurretIndex;

// Get the player in turret
_return = _vehicle turretLocal [_turretIndex];

_return

