params ['_vehicle'];
private ['_ai', '_isPilot', '_coPilot'];
#include "\CRM\crm_autopilot\defines\constants.hpp"

// Check if caller is pilot 
_isPilot = [player, _vehicle] call crm_common_fnc_isPilotOf;  

// Check if copilot seat is occupied  
_coPilot = [vehicle player] call crm_common_fnc_getCopilot;  
// Set collective to neutral value  
_vehicle setActualCollectiveRTD 0.5;  
 
// Create AI Copilot  
_ai = [_vehicle] call crm_autopilot_fnc_createCopilotAI; 
//_ai hideObject false;  
 
// Move pilot to copilot seat  
moveOut player;  
player moveInTurret [_vehicle, [0]];  
// Move AI copilot in to pilot's seat  
_ai moveInDriver _vehicle; 
_ai disableAI "TARGET";
_ai disableAI "AUTOTARGET";
_ai disableAI "FSM"; 
_vehicle engineOn true; 
// Set a waypoint to hold current heading/altitude  
 
_pos = getPosASL _vehicle; 
_dir = vectorDir _vehicle;
_dir set [2, 0]; 
_dir = vectorNormalized _dir; 
_delta = _dir vectorMultiply 100000; 
_newPos = _pos vectorAdd _delta; 
_wp = (group _ai) addWaypoint [_newPos,-1, -1, "foo"];