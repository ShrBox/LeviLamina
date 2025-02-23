#pragma once

#include "mc/_HeaderOutputPredefine.h"

class launch_time_clock {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::chrono::milliseconds getMillisecondsSinceLaunch_DEPRECATED();

    MCAPI static ::std::chrono::duration<double, ::std::ratio<1, 1>> getSecondsSinceLaunch_DEPRECATED();
    // NOLINTEND
};
