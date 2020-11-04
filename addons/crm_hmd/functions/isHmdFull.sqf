params ['_vehicle'];
private ['_return'];
#include "defines.hpp"

_return = ((getUserMFDValue _vehicle) select MFD_USER_FULL) == 0;
_return
