params ['_vehicle'];
private ['_turretIndex', '_return'];

// Get the index of the turret
_turretIndex = [_vehicle] call crm_ir_pointer_fnc_getIrPointerTurretIndex;

// Get the player in turret
_return = _vehicle turretUnit [_turretIndex];

_return

