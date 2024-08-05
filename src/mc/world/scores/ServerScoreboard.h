#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/enums/ObjectiveSortOrder.h"
#include "mc/world/scores/Scoreboard.h"

class ServerScoreboard : public ::Scoreboard {
public:
    // prevent constructor by default
    ServerScoreboard& operator=(ServerScoreboard const&);
    ServerScoreboard(ServerScoreboard const&);
    ServerScoreboard();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerScoreboard();

    // vIndex: 1
    virtual class DisplayObjective const* setDisplayObjective(
        std::string const&     displaySlotName,
        class Objective const& objective,
        ::ObjectiveSortOrder   order
    );

    // vIndex: 2
    virtual class Objective* clearDisplayObjective(std::string const& displaySlotName);

    // vIndex: 3
    virtual struct ScoreboardId const& createScoreboardId(class Player const& player);

    // vIndex: 4
    virtual struct ScoreboardId const& createScoreboardId(class Actor const& entity);

    // vIndex: 5
    virtual struct ScoreboardId const& createScoreboardId(std::string const& name);

    // vIndex: 6
    virtual void onObjectiveAdded(class Objective const& objective);

    // vIndex: 7
    virtual void onObjectiveRemoved(class Objective& objective);

    // vIndex: 8
    virtual void onScoreChanged(struct ScoreboardId const& id, class Objective const& obj);

    // vIndex: 9
    virtual void onPlayerScoreRemoved(struct ScoreboardId const& id, class Objective const& objective);

    // vIndex: 10
    virtual void onPlayerJoined(class Player const& player);

    // vIndex: 11
    virtual void onPlayerIdentityUpdated(struct PlayerScoreboardId const& playerId);

    // vIndex: 12
    virtual void tick();

    // vIndex: 13
    virtual void setPacketSender(class PacketSender* sender);

    // vIndex: 14
    virtual void writeToLevelStorage();

    // vIndex: 15
    virtual bool isClientSide() const;

    MCAPI
    ServerScoreboard(class CommandSoftEnumRegistry, class LevelStorage*, gsl::not_null<class StackRefResult<class GameplayUserManager>> const&);

    MCAPI void deserialize(std::unique_ptr<class CompoundTag> root);

    MCAPI void initializeImGui(class Level& level);

    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager&);

    MCAPI void intializeWithActorManager(class ActorManager&);

    MCAPI std::unique_ptr<class CompoundTag> serialize() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _clearAllScoreTagsForObjective(std::string const&, class DisplayObjective const&);

    MCAPI class Player* _getPlayer(struct ActorUniqueID) const;

    MCAPI class StackRefResult<class GameplayUserManager> _getValidGameplayUserManager() const;

    MCAPI void _onGameplayUserRemoved(class EntityContext&);

    MCAPI void _onRemoveActorEntityReferences(class Actor&);

    MCAPI void _onSaveEvent(class LevelStorage&);

    MCAPI void _stopTrackingObjective(class Objective const& objective);

    MCAPI struct ScorePacketInfo _unpackIdentityDefToScorePacket(
        class ScoreboardIdentityRef const& identityDef,
        std::string const&                 objName,
        int                                score
    );

    MCAPI void _updateAllScoreTagsForObjective(std::string const&, class DisplayObjective const&);

    MCAPI void _updateScoreTag(struct ScoreboardId const&, bool);

    // NOLINTEND
};
