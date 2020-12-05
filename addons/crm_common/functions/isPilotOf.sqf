params ["_unit", "_vehicle"];
private ["_return"];

// Check if unit is pilot
_return = _unit isEqualTo (driver _vehicle);

_return