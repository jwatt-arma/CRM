params ["_vehicle"];
private ["_emitterSource", "_return"];

// Get config entry specifying the selection for the emitter;
_emitterSource = [_vehicle] call crm_common_fnc_getCopilotTurretOpticsSelection;
_return = _vehicle modelToWorldVisual (_vehicle selectionPosition _emitterSource);

 _return