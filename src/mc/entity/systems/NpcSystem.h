#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
namespace NpcComponents { struct LeaveMenuCountdown; }
// clang-format on

class NpcSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    NpcSystem& operator=(NpcSystem const&);
    NpcSystem(NpcSystem const&);
    NpcSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NpcSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    MCAPI static void tickCountdown(class EntityContext& entity, struct NpcComponents::LeaveMenuCountdown&);

    // NOLINTEND
};
