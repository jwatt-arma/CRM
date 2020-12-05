params ['_vehicle'];
private ['_autohover'];
#include "\CRM\crm_autohover\defines\constants.hpp"

_autohover = [_vehicle] call crm_autohover_fnc_isAutohoverOn;
[_vehicle, not _autohover] call crm_autohover_fnc_setAltHold;