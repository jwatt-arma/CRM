params ['_unit'];
private ['_vehicle', '_turretController', '_return'];

_return = false;
_vehicle = vehicle _unit;
_turretController = [_vehicle] call crm_ir_pointer_fnc_getIrPointerController;
_return = _turretController == _unit;

_return