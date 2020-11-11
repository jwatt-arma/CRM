params ['_vehicle'];
private ['_value', '_return'];
#include "\z\ace\addons\main\script_mod.hpp"
#include "\z\ace\addons\main\script_macros.hpp"
#include "\CRM\crm_autohover\defines\constants.hpp"

_value = getNumber (configFile >> "CfgVehicles" >> typeOf(_vehicle) >> QUOTE(AUTOHOVER_CAPABLE_PROP));
if (isNil { _value }) exitWith { false };

_return = _value == 1;

_return
