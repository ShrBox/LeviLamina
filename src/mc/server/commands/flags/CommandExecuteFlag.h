#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandExecuteFlag : unsigned short {
    Allowed    = 0,
    Disallowed = 1 << 5,
};
