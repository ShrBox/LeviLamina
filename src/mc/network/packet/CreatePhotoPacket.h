#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CreatePhotoPacket : public ::Packet {
public:
    // prevent constructor by default
    CreatePhotoPacket& operator=(CreatePhotoPacket const&);
    CreatePhotoPacket(CreatePhotoPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CreatePhotoPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI CreatePhotoPacket();

    // NOLINTEND
};
