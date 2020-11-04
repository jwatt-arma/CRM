params ['_vehicle'];
private ['_return'];
#include "defines.hpp"

_return = ((getUserMFDValue _vehicle) select MFD_USER_ON) == 1;
_return
