#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class Interact; }
namespace AgentComponents { struct ActionDetails; }
// clang-format on

namespace AgentInteractSystem {
// NOLINTBEGIN
MCAPI void
initialize(class EntityContext& entity, struct StateVectorComponent const&, struct MobBodyRotationComponent const&, struct AgentComponents::ActionDetails const& details, class AgentComponents::Interact const&);

MCAPI void
tick(class EntityContext& entity, struct StateVectorComponent const&, struct MobBodyRotationComponent const&, struct AgentComponents::ActionDetails const& details, class AgentComponents::Interact const&);
// NOLINTEND

}; // namespace AgentInteractSystem
