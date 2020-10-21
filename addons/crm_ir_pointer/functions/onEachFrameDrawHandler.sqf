params ['_vehicle'];
private ['_canSeeIr', '_pointerOn', '_turretIndex', '_emitterPos', '_targetPos', '_canDrawLaser'];
// Nothing to do if player can't see IR spectrum
_canSeeIr = [player] call crm_ir_pointer_fnc_canSeeIr;
if (not _canSeeIr) exitWith {};
// Draw IR pointer if it is on
_pointerOn = [_vehicle] call crm_ir_pointer_fnc_isIrPointerOn;
if (_pointerOn) then {
	_turretIndex = [_vehicle] call crm_ir_pointer_fnc_getIrPointerTurretIndex;
	_emitterPos = [_vehicle] call crm_ir_pointer_fnc_getIrPointerEmitterPos;
	_targetPos = [_vehicle, _turretIndex] call crm_ir_pointer_fnc_getIrPointerTargetPosRemote;
	[_emitterPos, _targetPos] call crm_ir_pointer_fnc_drawIrPointer;
};