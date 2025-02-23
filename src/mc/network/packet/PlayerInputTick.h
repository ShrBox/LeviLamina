#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInputTick {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayerInputTick(uint64 value);

    MCFOLD explicit operator uint64() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(uint64 value);
    // NOLINTEND
};
