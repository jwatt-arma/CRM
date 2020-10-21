params ['_emitterPos', '_targetPos'];
private ['_iteration', '_n_lines', '_radius', '_lineFormat', '_angle', '_angle', '_start', '_end'];

// Constants
_n_lines = 20;
_radius = 0.01;
_lineFormat = [1, 1, 1, 1];

// Iterate over all the lines to draw
for "_iteration" from 1 to _n_lines do {

    // Determine offset from center
    _angle = 360 / (_iteration * _n_lines);
    _offset = [_radius, _angle];

    // Get start position for line
    _start = _emitterPos getPos _offset;
    _start set [2, _emitterPos select 2];

    // Get end position for line
    _end = _targetPos getPos _offset;
    _end set [2, _targetPos select 2];

    // Draw it
    drawLine3d [_stard, _end, _lineFormat];
};