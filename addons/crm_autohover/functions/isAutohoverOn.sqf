params ['_vehicle'];
private ['_return'];
#include "\CRM\crm_autohover\defines\constants.hpp"

// Get variable showing whether autohover is on
_return = _vehicle getVariable [AUTOHOVER_VAR_NAME, false];

_return