#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RakNetGUID; }
// clang-format on

class NetworkIdentifier {
public:
    // NetworkIdentifier inner types define
    enum class Type {};

public:
    // prevent constructor by default
    NetworkIdentifier& operator=(NetworkIdentifier const&);
    NetworkIdentifier(NetworkIdentifier const&);

public:
    // NOLINTBEGIN
    MCAPI NetworkIdentifier();

    MCAPI explicit NetworkIdentifier(struct RakNet::RakNetGUID const& guid);

    MCAPI explicit NetworkIdentifier(struct sockaddr_in const& address);

    MCAPI explicit NetworkIdentifier(struct sockaddr_in6 const& address);

    MCAPI explicit NetworkIdentifier(uint64);

    MCAPI std::string getAddress() const;

    MCAPI std::string getCorrelationId() const;

    MCAPI uint64 getHash() const;

    MCAPI struct RakNet::RakNetGUID const& getRakNetGUID() const;

    MCAPI struct sockaddr_in const& getSocketAddress() const;

    MCAPI struct sockaddr_in6 const& getSocketAddress6() const;

    MCAPI ::NetworkIdentifier::Type getType() const;

    MCAPI bool isUnassigned() const;

    MCAPI bool operator==(class NetworkIdentifier const&) const;

    MCAPI std::string toString() const;

    MCAPI static std::string calculateCorrelationId(struct RakNet::RakNetGUID const&);

    MCAPI static std::string calculateCorrelationId(uint64);

    MCAPI static std::string hyphenateId(uint64);

    MCAPI static class NetworkIdentifier INVALID_ID;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool equalsTypeData(class NetworkIdentifier const& other) const;

    // NOLINTEND
};
