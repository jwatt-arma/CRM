params ['_vehicle'];
private ['_setVarsHandler', '_drawHandler'];

// Don't bother running on server
if (not hasInterface) exitWith {};

// Draw IR Pointer
_drawHandler = [{
	_this call crm_ir_pointer_fnc_onEachFrameDrawHandler;
}, 0, _vehicle] call CBA_fnc_addPerFrameHandler;

//Broadcast target position of IR Pointer
_setVarsHandler = [{ _this call crm_ir_pointer_fnc_onEachFrameVarsHandler;
}, 0.3, _vehicle] call CBA_fnc_addPerFrameHandler;

// Remove the per frame handlers if vehicle is killed
// _vehicle addEventHandler ["Killed", {
// 	hint 'foo';
// 	//[_setVarsHandler] call CBA_fnc_removePerFrameHandler;
// 	//[_drawHandler] call CBA_fnc_removePerFrameHandler;
// }];