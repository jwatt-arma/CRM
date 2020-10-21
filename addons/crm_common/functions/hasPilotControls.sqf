params ["_unit"];
private ["_vehicle", "_return"];

_vehicle = vehicle _unit;
_return = currentPilot _vehicle == _unit;
_return