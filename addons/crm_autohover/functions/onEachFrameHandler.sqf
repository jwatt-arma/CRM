params ['_vehicle'];
private ['_isPilot', '_isInVehicle', '_autohoverOn', '_autohoverCapable'];
#include "\CRM\crm_autohover\defines\constants.hpp"
_isPilot = [player] call crm_common_fnc_isPilot;
_isInVehicle = (vehicle player) == _vehicle;
_autohoverCapable = [_vehicle] call crm_autohover_fnc_isAutohoverCapable;
_autohoverOn = [_vehicle] call crm_autohover_fnc_isAutohoverOn;
if (_isInVehicle && _isPilot && _autohoverOn && _autohoverCapable) then {
	hint 'foo';
	[_vehicle] call crm_autohover_fnc_setAutohoverCollective;
};