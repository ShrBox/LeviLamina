#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorGriefingBlockEvent {
public:
    // prevent constructor by default
    ActorGriefingBlockEvent& operator=(ActorGriefingBlockEvent const&);
    ActorGriefingBlockEvent();

public:
    // NOLINTBEGIN
    MCAPI ActorGriefingBlockEvent(struct ActorGriefingBlockEvent const&);

    MCAPI ~ActorGriefingBlockEvent();

    // NOLINTEND
};
