params ['_vehicle'];
private ['_sink_rate', '_correction_sign', '_correction', '_collective'];
#include "\CRM\crm_autohover\defines\constants.hpp"

// Calculate sink rate
_sink_rate = (velocity _vehicle) select 2;

// Determine correction to collective
_correction_sign = -1 * _sink_rate / (abs _sink_rate);
_correction = (abs (_sink_rate * AUTOHOVER_COLLECTIVE_RATE)) min AUTOHOVER_COLLECTIVE_MAX_CHANGE;

// Get current value of collective
_collective = collectiveRTD _vehicle;

// Get new value of collective
_collective =  ((_collective + _correction * _correction_sign) min AUTOHOVER_MAX_COLLECTIVE) max AUTOHOVER_MIN_COLLECTIVE;

// Apply correction
_vehicle setActualCollectiveRTD _collective;