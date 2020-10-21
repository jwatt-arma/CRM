params ["_vehicle"];
private ["_return"];

// Get the variable corresponding to target position of IR pointer
_return = _vehicle getVariable ['crm_ir_pointer_target_pos', [0, 0, 0]];

_return