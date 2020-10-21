params ['_veh'];
private ["_trt", "_return"];

_index = [_veh] call crm_common_fnc_getCopilotTurretIndex;
_return = _veh turretUnit [_index];
_return