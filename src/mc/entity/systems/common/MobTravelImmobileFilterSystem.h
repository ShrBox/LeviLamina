#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class MobTravelImmobileFilterSystem {
public:
    // prevent constructor by default
    MobTravelImmobileFilterSystem& operator=(MobTravelImmobileFilterSystem const&);
    MobTravelImmobileFilterSystem(MobTravelImmobileFilterSystem const&);
    MobTravelImmobileFilterSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo create();

    MCAPI static void tick(
        class ViewT<class StrictEntityContext, struct Include<struct MobTravelComponent>>,
        class ViewT<
            class StrictEntityContext,
            struct ActorDataFlagComponent const,
            class Optional<class FlagComponent<struct ActorIsImmobileFlag> const>>,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct MobFlag>>,
            struct MovementAttributesComponent const,
            class Optional<class FlagComponent<struct ActorIsKnockedBackOnDeathFlag> const>>,
        class ViewT<
            class StrictEntityContext,
            struct ActorDataFlagComponent const,
            struct Include<struct OnGroundFlagComponent, class FlagComponent<struct HorseFlag>>,
            struct Exclude<
                class FlagComponent<struct MobAllowStandSlidingFlag>,
                class FlagComponent<struct MobIsJumpingFlag>>>,
        class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct HorseFlag>>>,
        class ViewT<
            class StrictEntityContext,
            class FlagComponent<struct PlayerIsSleepingFlag> const,
            class FlagComponent<struct PlayerComponentFlag> const>,
        class EntityModifier<struct MobTravelComponent> mod
    );

    // NOLINTEND
};
