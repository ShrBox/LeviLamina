#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/GameType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class StartGamePacket : public ::Packet {
public:
    // prevent constructor by default
    StartGamePacket& operator=(StartGamePacket const&);
    StartGamePacket(StartGamePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StartGamePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI StartGamePacket();

    MCAPI StartGamePacket(
        class ItemRegistryRef,
        class LevelSettings const&        settings,
        struct ActorUniqueID              entityId,
        class ActorRuntimeID              runtimeId,
        ::GameType                        entityGameType,
        bool                              enableItemStackNetManager,
        class Vec3 const&                 pos,
        class Vec2 const&                 rot,
        std::string const&                levelId,
        std::string const&                levelName,
        class ContentIdentity const&      premiumTemplateContentIdentity,
        std::string const&                multiplayerCorrelationId,
        class BlockDefinitionGroup const& blockDefinitionGroup,
        bool                              isTrial,
        class CompoundTag,
        struct PlayerMovementSettings const& movementSettings,
        std::string const&,
        class mce::UUID const& worldTemplateId,
        uint64                 levelCurrentTime,
        int                    enchantmentSeed,
        uint64
    );

    // NOLINTEND
};
