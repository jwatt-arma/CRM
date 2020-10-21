params ['_veh'];
private ["_cfg", "_trts", "_return", "_trt"];

_cfg = configFile >> "CfgVehicles" >> typeOf(_veh);
_trts = _cfg >> "turrets";
_return = nil;

for "_i" from 0 to (count _trts - 1) do {
	_trt = _trts select _i;

	if(getNumber(_trt >> "iscopilot") == 1) exitWith {
		_return = [_trt, _i];
	};
};

_return