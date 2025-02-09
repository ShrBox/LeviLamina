#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"
#include "mc/world/actor/ai/village/POIType.h"

// auto generated forward declare list
// clang-format off
class POIInstance;
// clang-format on

class HideGoal : public ::MoveToPOIGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mHideAttempts;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 17
    virtual ::std::weak_ptr<::POIInstance> _getOwnedPOI(::POIType type) const /*override*/;

    // vIndex: 16
    virtual uint64 _getRepathTime() const /*override*/;

    // vIndex: 0
    virtual ~HideGoal() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI bool $canContinueToUse();

    MCAPI void $stop();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI ::std::weak_ptr<::POIInstance> $_getOwnedPOI(::POIType type) const;

    MCFOLD uint64 $_getRepathTime() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
