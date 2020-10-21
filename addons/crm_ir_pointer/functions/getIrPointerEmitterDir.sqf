params ['_vehicle'];
private ['_return', '_weaponName'];

_weaponName = [_vehicle] call crm_ir_pointer_fnc_getIrPointerEmitterWeaponName;
_return = _vehicle weaponDirection _weaponName;

_return