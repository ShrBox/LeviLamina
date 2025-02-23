#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithOpenIdConnectRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk23e74d;
    ::ll::UntypedStorage<1, 2>   mUnk120c54;
    ::ll::UntypedStorage<8, 32>  mUnka860af;
    ::ll::UntypedStorage<8, 32>  mUnka35e1e;
    ::ll::UntypedStorage<8, 128> mUnk692c00;
    ::ll::UntypedStorage<8, 32>  mUnk7b3de4;
    ::ll::UntypedStorage<8, 32>  mUnk8d09bc;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithOpenIdConnectRequest& operator=(LoginWithOpenIdConnectRequest const&);
    LoginWithOpenIdConnectRequest(LoginWithOpenIdConnectRequest const&);
    LoginWithOpenIdConnectRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithOpenIdConnectRequest() /*override*/ = default;

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
