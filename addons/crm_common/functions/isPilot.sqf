params ["_unit"];
private ["_vehicle", "_return"];

// Return false if unit isn't in a vehicle
_vehicle = vehicle unit;
if(_vehicle == _unit) exitWith {false};

// Check if unit is pilot
_return = _unit isEqualTo (driver _vehicle);

_return