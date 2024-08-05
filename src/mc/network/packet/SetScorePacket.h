#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/ScorePacketType.h"
#include "mc/network/packet/Packet.h"

class SetScorePacket : public ::Packet {
public:
    // prevent constructor by default
    SetScorePacket& operator=(SetScorePacket const&);
    SetScorePacket(SetScorePacket const&);
    SetScorePacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetScorePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI static class SetScorePacket change(std::vector<struct ScorePacketInfo> info);

    MCAPI static class SetScorePacket change(struct ScoreboardId const& id, class Objective const& objective);

    MCAPI static class SetScorePacket remove(struct ScoreboardId const& id, class Objective const& objective);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI SetScorePacket(::ScorePacketType type, struct ScoreboardId const& id, class Objective const& objective);

    // NOLINTEND
};
