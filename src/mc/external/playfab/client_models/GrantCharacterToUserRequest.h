#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GrantCharacterToUserRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk32233d;
    ::ll::UntypedStorage<8, 32> mUnk1a0f0c;
    ::ll::UntypedStorage<8, 32> mUnkb39236;
    // NOLINTEND

public:
    // prevent constructor by default
    GrantCharacterToUserRequest& operator=(GrantCharacterToUserRequest const&);
    GrantCharacterToUserRequest(GrantCharacterToUserRequest const&);
    GrantCharacterToUserRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GrantCharacterToUserRequest() /*override*/ = default;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayFab::ClientModels
