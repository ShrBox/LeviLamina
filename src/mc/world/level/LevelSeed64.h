#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelSeed64 {
public:
    // LevelSeed64 inner types define
    using ValueType = uint64;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD uint to32BitRandomSeed() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::LevelSeed64 fromUnsigned32(uint value);
    // NOLINTEND
};
