#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToLiquidGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class MoveToLavaGoal : public ::MoveToLiquidGoal {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveToLavaGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MoveToLavaGoal(
        ::Mob& mob,
        float  speedModifier,
        int    searchRange,
        int    searchHeight,
        int    searchCount,
        float  goalRadius
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Mob& mob, float speedModifier, int searchRange, int searchHeight, int searchCount, float goalRadius);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
