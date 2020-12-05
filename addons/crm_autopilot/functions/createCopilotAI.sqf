params ['_vehicle'];
private ['_pilot', '_group', '_ai'];

// Create AI copilot
_pilot = driver _vehicle;
_group = createGroup [(side _pilot), true];
_ai = _group createUnit [(typeOf _pilot), [-1000,-1000,0], [], 0, "CAN_COLLIDE"];

// Make invisible
hideObject _ai;

_ai
