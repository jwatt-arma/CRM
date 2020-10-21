params ["_unit"];
private ["_vehicle", "_cfg", "_trts", "_return", "_trt"];

// Return false if unit is not in a vehicle
_vehicle = vehicle _unit;
if (_vehicle == player) exitWith { false };

// Pull turrets from config
_cfg = configFile >> "CfgVehicles" >> typeOf(_vehicle);
_trts = _cfg >> "turrets";

// Loop through turrets, find the copilot turret, and see if 
// unit is in it.
_return = false;
for "_i" from 0 to (count _trts - 1) do {
	_trt = _trts select _i;

	if(getNumber(_trt >> "iscopilot") == 1) exitWith {
		_return = (_vehicle turretUnit [_i] == player);
	};
};

_return