params ['_veh'];
private ["_trt", "_return"];

_trt = [_veh] call crm_common_fnc_getCopilotTurret;
_return = _trt select 1;

_return