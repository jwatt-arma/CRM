params ['_vehicle'];
private ['_setVarsHandler', '_drawHandler'];
#include "\CRM\crm_autohover\defines\constants.hpp"

// Don't bother running on server
if (not hasInterface) exitWith {};

// Autohover
_drawHandler = [{
	_this call crm_autohover_fnc_onEachFrameHandler;
}, AUTOHOVER_COLLECTIVE_UPDATE_DELAY, _vehicle] call CBA_fnc_addPerFrameHandler;