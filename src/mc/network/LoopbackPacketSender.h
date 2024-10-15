#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/network/PacketSender.h"

class LoopbackPacketSender : public ::PacketSender {
public:
    // prevent constructor by default
    LoopbackPacketSender& operator=(LoopbackPacketSender const&);
    LoopbackPacketSender(LoopbackPacketSender const&);
    LoopbackPacketSender();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoopbackPacketSender() = default;

    // vIndex: 1
    virtual void send(class Packet& packet);

    // vIndex: 2
    virtual void sendToServer(class Packet& packet);

    // vIndex: 3
    virtual void sendToClient(class UserEntityIdentifierComponent const* userIdentifier, class Packet const& packet);

    // vIndex: 4
    virtual void sendToClient(class NetworkIdentifier const& id, class Packet const& packet, ::SubClientId subid);

    // vIndex: 5
    virtual void sendToClients(std::vector<struct NetworkIdentifierWithSubId> const& ids, class Packet const& packet);

    // vIndex: 6
    virtual void sendBroadcast(class Packet const& packet);

    // vIndex: 7
    virtual void
    sendBroadcast(class NetworkIdentifier const& exceptId, ::SubClientId exceptSubid, class Packet const& packet);

    // vIndex: 8
    virtual void flush(class NetworkIdentifier const& id, std::function<void()>&& callback);

    MCAPI LoopbackPacketSender(::SubClientId subid, class ServerNetworkSystem& network);

    MCAPI void addLoopbackCallback(class NetEventCallback& callback);

    MCAPI void removeLoopbackCallback(class NetEventCallback& callback);

    MCAPI void setUserList(std::vector<class OwnerPtr<class EntityContext>> const* userList);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(::SubClientId subid, class ServerNetworkSystem& network);

    MCAPI void flush$(class NetworkIdentifier const& id, std::function<void()>&& callback);

    MCAPI void send$(class Packet& packet);

    MCAPI void sendBroadcast$(class Packet const& packet);

    MCAPI void
    sendBroadcast$(class NetworkIdentifier const& exceptId, ::SubClientId exceptSubid, class Packet const& packet);

    MCAPI void sendToClient$(class UserEntityIdentifierComponent const* userIdentifier, class Packet const& packet);

    MCAPI void sendToClient$(class NetworkIdentifier const& id, class Packet const& packet, ::SubClientId subid);

    MCAPI void sendToClients$(std::vector<struct NetworkIdentifierWithSubId> const& ids, class Packet const& packet);

    MCAPI void sendToServer$(class Packet& packet);

    // NOLINTEND
};
