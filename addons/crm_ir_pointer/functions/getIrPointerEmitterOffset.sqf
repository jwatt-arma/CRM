params ['_vehicle'];
private ['_return', '_xOffset', '_yOffset','_zOffset'];

// Get the config entry that relates to what turret index corresponds to controller of IR pointer
 _xOffset = getNumber  (configFile >> "CfgVehicles" >> typeOf _vehicle >> "crm_ir_pointer_x_offset");
 _yOffset = getNumber  (configFile >> "CfgVehicles" >> typeOf _vehicle >> "crm_ir_pointer_y_offset");
 _zOffset = getNumber  (configFile >> "CfgVehicles" >> typeOf _vehicle >> "crm_ir_pointer_z_offset");

 _return = [_xOffset, _yOffset, _zOffset];

 _return