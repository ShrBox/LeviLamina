#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GetLeaderboardForUsersCharactersResult : public ::PlayFab::PlayFabResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8d9841;
    // NOLINTEND

public:
    // prevent constructor by default
    GetLeaderboardForUsersCharactersResult& operator=(GetLeaderboardForUsersCharactersResult const&);
    GetLeaderboardForUsersCharactersResult(GetLeaderboardForUsersCharactersResult const&);
    GetLeaderboardForUsersCharactersResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetLeaderboardForUsersCharactersResult() /*override*/ = default;

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
