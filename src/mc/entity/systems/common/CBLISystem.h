#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededFlag;
struct BoatFlag;
struct ControlledByLocalInstanceFlag;
struct HorseFlag;
struct LocalPlayerComponentFlag;
struct PlayerComponentFlag;
struct RecalculateControlledByLocalInstanceRequestFlag;
struct VehicleComponent;
// clang-format on

namespace ControlledByLocalInstanceSystemImpl {

struct CBLISystem {
public:
    // prevent constructor by default
    CBLISystem& operator=(CBLISystem const&);
    CBLISystem(CBLISystem const&);
    CBLISystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CBLISystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct ActorMovementTickNeededFlag>,
                          class FlagComponent<struct BoatFlag>,
                          class FlagComponent<struct HorseFlag>,
                          class FlagComponent<struct PlayerComponentFlag>,
                          class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>>,
                      struct Read<
                          struct VehicleComponent,
                          struct ActorDataFlagComponent,
                          class FlagComponent<struct LocalPlayerComponentFlag>>,
                      struct Write<>,
                      struct AddRemove<class FlagComponent<struct ControlledByLocalInstanceFlag>>,
                      struct GlobalRead<>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);

    // vIndex: 6
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct BoatFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>>, struct Read<struct VehicleComponent, struct ActorDataFlagComponent, class FlagComponent<struct LocalPlayerComponentFlag>>, struct Write<>, struct AddRemove<class FlagComponent<struct ControlledByLocalInstanceFlag>>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    // NOLINTEND
};

}; // namespace ControlledByLocalInstanceSystemImpl
