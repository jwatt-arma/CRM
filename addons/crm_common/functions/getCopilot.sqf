params ['_unit'];
private ["_veh", "_cfg", "_trts", "_return", "_trt"];

if(vehicle _unit == _unit) exitWith {nil};

_veh = (vehicle _unit);
_cfg = configFile >> "CfgVehicles" >> typeOf(_veh);
_trts = _cfg >> "turrets";
_return = nil;

for "_i" from 0 to (count _trts - 1) do {
	_trt = _trts select _i;

	if(getNumber(_trt >> "iscopilot") == 1) exitWith {
		_return = _veh turretUnit [_i];
	};
};

_return