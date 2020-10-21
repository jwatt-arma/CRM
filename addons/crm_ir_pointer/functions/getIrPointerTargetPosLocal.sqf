params ['_vehicle', '_index'];
private ['_pos', '_dir', '_unitDir', '_maxIntersectDistance', '_intersections', '_intersectionPos'];

// Max distance to calculate intersection with objects/terrain
_maxIntersectDistance = 10000;

// Get the direction of the turret
[_vehicle, [_index]] call ace_common_fnc_getTurretDirection params ["_pos", "_dir"];

// Get a point in direction of turret at max intersection distance
_unitDir = vectorNormalized _dir;  
_maxIntersectVector = _unitDir vectorMultiply _maxIntersectDistance;
_maxIntersectPos = _pos vectorAdd _maxIntersectVector;

// Determine where line from emitter to point intersects with terrain/objects
_intersections = lineIntersectsSurfaces  [_pos, _maxIntersectPos];
_intersectionPos = ASLtoATL (_intersections select 0 select 0);

// If there is no intersection then just return the point at max intersection distance
if (isNil _intersectionPos) then {
    _intersectionPos = ASLtoATL _maxIntersectPos;
};

_intersectionPos
