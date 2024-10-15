#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SystemInfo {
public:
    // prevent constructor by default
    SystemInfo& operator=(SystemInfo const&);
    SystemInfo(SystemInfo const&);
    SystemInfo();

public:
    // NOLINTBEGIN
    MCAPI SystemInfo(struct SystemInfo&&);

    MCAPI ~SystemInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct SystemInfo&&);

    MCAPI void dtor$();

    // NOLINTEND
};
