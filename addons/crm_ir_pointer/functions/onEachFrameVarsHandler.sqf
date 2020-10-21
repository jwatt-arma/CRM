params ['_vehicle'];
private ['_isIrPointerController', '_isIrPointerOn', '_vehicle', '_turretIndex', '_targetPos'];

// Nothing to do if turret isn't local. Turret should
// only ever be local to one machine.
_isIrPointerController = [_vehicle] call crm_ir_pointer_fnc_isIrPointerLocal;
if (not _isIrPointerController) exitWith {};

// Nothing to do if laser pointer is not on
_isIrPointerOn = [_vehicle] call crm_ir_pointer_fnc_isIrPointerOn;
if (not _isIrPointerOn) exitWith {};

// Get the target position of pointer
_turretIndex = [_vehicle] call crm_ir_pointer_fnc_getIrPointerTurretIndex;
_targetPos = [_vehicle, _turretIndex] call crm_ir_pointer_fnc_getIrPointerTargetPosLocal;

// Broadcast result
[_vehicle, _targetPos] call crm_ir_pointer_fnc_setIrPointerTargetPosVar;