#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/events/MutablePlayerGameplayEvent.h"
#include "mc/events/PlayerGameplayEvent.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/events/EventRef.h"

class PlayerEventCoordinator {
public:
    // prevent constructor by default
    PlayerEventCoordinator& operator=(PlayerEventCoordinator const&);
    PlayerEventCoordinator(PlayerEventCoordinator const&);
    PlayerEventCoordinator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerEventCoordinator() = default;

    MCAPI class PlayerGameplayHandler& getPlayerGameplayHandler();

    MCAPI void registerPlayerGameplayHandler(std::unique_ptr<class PlayerGameplayHandler>&& handler);

    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct MutablePlayerGameplayEvent<::CoordinatorResult>> event);

    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct PlayerGameplayEvent<::CoordinatorResult>> const& event);

    MCAPI void sendEvent(class EventRef<struct PlayerGameplayEvent<void>> const& event);

    MCAPI void sendPlayerAwardAchievement(class Player& player, ::MinecraftEventing::AchievementIds achievement);

    MCAPI void sendPlayerCaravanChanged(class Actor const& mob, int caravanCount);

    MCAPI void sendPlayerDestroyedBlock(class Player& player, int x, int y, int z);

    MCAPI void
    sendPlayerItemEquipped(class Player& player, class ItemInstance const& equippedItem, int equipmentSlotId);

    MCAPI void sendPlayerItemPlaceInteraction(class Player& player, class ItemInstance const& itemBeforeUse);

    MCAPI void sendPlayerItemUseInteraction(class Player& player, class ItemInstance const& itemBeforeUse);

    MCAPI void sendPlayerMove(class Player& player);

    MCAPI void sendPlayerPortalBuilt(class Player& player, DimensionType dimensionBuiltIn);

    MCAPI void sendPlayerPortalUsed(class Player& player, DimensionType fromDimension, DimensionType toDimension);

    MCAPI void sendPlayerPoweredBeacon(class Player const&, int);

    MCAPI void sendPlayerSlide(class Player& player);

    MCAPI void sendPlayerTeleported(class Player& player);

    MCAPI void sendPlayerTeleported(class Player&, float);

    MCAPI void sendPlayerTick(class Player& player);

    // NOLINTEND
};
