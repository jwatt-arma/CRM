params ["_vehicle"];
private ["_cfg", "_trts", "_return", "_trt"];

_cfg = configFile >> "CfgVehicles" >> typeOf(_vehicle);
_trts = _cfg >> "turrets";
_return = false;
for "_i" from 0 to (count _trts - 1) do {
	_trt = _trts select _i;

	if(getNumber(_trt >> "showAsCargo") == 0) exitWith { true };
};

_return