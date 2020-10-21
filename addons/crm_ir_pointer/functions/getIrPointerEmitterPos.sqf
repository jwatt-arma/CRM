params ["_vehicle"];
private ["_emitterSource", "_return"];

// Get config entry specifying the selection for the emitter;
_emitterSource = getText (configFile >> "CfgVehicles" >> typeOf _vehicle >> "crm_ir_pointer_source");
_return = _vehicle modelToWorldVisual (_vehicle selectionPosition _emitterSource);

 _return