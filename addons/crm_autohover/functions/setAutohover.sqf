params ['_vehicle', '_value'];
#include "\CRM\crm_autohover\defines\constants.hpp"

_vehicle setVariable [AUTOHOVER_VAR_NAME, _value, false];

if (_value) then {
	_vehicle action ["autoHover", _vehicle];
} else {
	_vehicle action ["autoHoverCancel", _vehicle];
};