params ['_vehicle'];
private ['_return'];

// Get the config entry that relates to what turret index corresponds to controller of IR pointer
 _return = getNumber  (configFile >> "CfgVehicles" >> typeOf _vehicle >> "crm_ir_pointer_turret_index");

 _return