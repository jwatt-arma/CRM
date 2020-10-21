params ["_vehicle","_turretIndex"];
private ["_return"];

if (local _vehicle) then {
	//_return = [_vehicle, _turretIndex] call crm_ir_pointer_fnc_getIrPointerTargetPosLocal;
	_return = [_vehicle] call crm_ir_pointer_fnc_getIrPointerTargetPosRemote;
} else {
	_return = [_vehicle] call crm_ir_pointer_fnc_getIrPointerTargetPosRemote;
};

_return