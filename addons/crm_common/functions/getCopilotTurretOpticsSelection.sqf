params ['_veh'];
private ["_trt", "_return"];

_trt = ([_veh] call crm_common_fnc_getCopilotTurret) select 0;;
_return = getText(_trt >> "memoryPointGunnerOptics");

_return