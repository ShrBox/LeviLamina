#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/raknet/RakNetGUID.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RakNetGUID; }
// clang-format on

class NetworkIdentifier {
public:
    // NetworkIdentifier inner types define
    enum class Type : int {
        RakNet    = 0,
        Address   = 1,
        Address6  = 2,
        NetherNet = 3,
        Invalid   = 4,
    };

public:
    LLNDAPI std::string getIPAndPort() const;

public:
    // member variables
    // NOLINTBEGIN
    uint64                       mNetherNetIdValue;
    ::RakNet::RakNetGUID         mGuid;
    ::ll::UntypedStorage<8, 128> mSock;
    ::NetworkIdentifier::Type    mType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkIdentifier();

    MCAPI explicit NetworkIdentifier(::sockaddr_in const& address);

    MCAPI explicit NetworkIdentifier(::sockaddr_in6 const& address);

    MCAPI explicit NetworkIdentifier(::RakNet::RakNetGUID const& guid);

    MCAPI explicit NetworkIdentifier(uint64 nethernetId);

    MCAPI ::std::string getAddress() const;

    MCAPI ::std::string getCorrelationId() const;

    MCAPI uint64 getHash() const;

    MCFOLD ::RakNet::RakNetGUID const& getRakNetGUID() const;

    MCFOLD ::sockaddr_in const& getSocketAddress() const;

    MCFOLD ::sockaddr_in6 const& getSocketAddress6() const;

    MCFOLD ::NetworkIdentifier::Type getType() const;

    MCAPI bool isUnassigned() const;

    MCAPI bool operator==(::NetworkIdentifier const& other) const;

    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string calculateCorrelationId(uint64 netherNetId);

    MCAPI static ::std::string calculateCorrelationId(::RakNet::RakNetGUID const& rakId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::NetworkIdentifier& INVALID_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::sockaddr_in const& address);

    MCAPI void* $ctor(::sockaddr_in6 const& address);

    MCAPI void* $ctor(::RakNet::RakNetGUID const& guid);

    MCAPI void* $ctor(uint64 nethernetId);
    // NOLINTEND
};
