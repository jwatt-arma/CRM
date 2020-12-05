params ['_vehicle'];
private ['_return'];
#include "\CRM\crm_autopilot\defines\constants.hpp"

// Get variable showing whether autopilot is on
_return = _vehicle getVariable [AUTOPILOT_ENABLED_VAR_NAME, false];

_return