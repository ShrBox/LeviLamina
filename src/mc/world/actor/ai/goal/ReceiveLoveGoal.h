#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class ReceiveLoveGoal : public ::Goal {
public:
    // prevent constructor by default
    ReceiveLoveGoal& operator=(ReceiveLoveGoal const&);
    ReceiveLoveGoal(ReceiveLoveGoal const&);
    ReceiveLoveGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ReceiveLoveGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // NOLINTEND
};
