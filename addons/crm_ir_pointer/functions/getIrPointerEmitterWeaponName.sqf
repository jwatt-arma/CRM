params ["_vehicle"];
private ["_return"];

// Get config entry specifying the selection for the emitter;
_return = getText (configFile >> "CfgVehicles" >> typeOf _vehicle >> "crm_ir_pointer_weapon");

 _return