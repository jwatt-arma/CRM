params ['_vehicle'];
private ['_isIrPointerController', '_turretIndex', '_targetPos', '_currentValue'];

// Don't do anything if players is not controlling pointer
_isIrPointerController = [player] call crm_ir_pointer_fnc_isIrPointerController;
if (not _isIrPointerController) exitWith {};

// Get the current value
_currentValue = [_vehicle] call crm_ir_pointer_fnc_isIrPointerOn;

// If we are toggling the laser on we need to update the target location
if (_currentValue) then {
	_turretIndex = [_vehicle] call crm_common_fnc_getCopilotTurretIndex;
	_targetPos = [_vehicle, _turretIndex] call crm_ir_pointer_fnc_getIrPointerTargetPos;
	[_vehicle, _targetPos] call crm_ir_pointer_fnc_setIrPointerTargetPosVar;
};

// Set the new value publicly
_vehicle setVariable ['crm_ir_pointer_on', not _currentValue, true];