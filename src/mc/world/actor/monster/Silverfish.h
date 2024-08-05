#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Silverfish : public ::Monster {
public:
    // prevent constructor by default
    Silverfish& operator=(Silverfish const&);
    Silverfish(Silverfish const&);
    Silverfish();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~Silverfish() = default;

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 149
    virtual void _playStepSound(class BlockPos const& pos, class Block const& onBlock);

    // vIndex: 152
    virtual void spawnAnim();

    // vIndex: 160
    virtual bool checkSpawnRules(bool fromSpawner);

    // vIndex: 184
    virtual float _getWalkTargetValue(class BlockPos const& pos);

    // vIndex: 190
    virtual bool isDarkEnoughToSpawn() const;

    MCAPI Silverfish(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND
};
