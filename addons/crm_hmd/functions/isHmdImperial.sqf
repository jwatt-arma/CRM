params ['_vehicle'];
private ['_return'];
#include "defines.hpp"

_return = ((getUserMFDValue _vehicle) select MFD_USER_IMPERIAL) == 1;
_return
