#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class TripodCameraActivatedComponent {
public:
    // TripodCameraActivatedComponent inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // TripodCameraActivatedComponent inner types define
    class Definition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkfb31c2;
        // NOLINTEND

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void initialize(::EntityContext&, ::TripodCameraActivatedComponent& component) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk41d2e0;
    ::ll::UntypedStorage<4, 4>  mUnk59f89a;
    // NOLINTEND

public:
    // prevent constructor by default
    TripodCameraActivatedComponent& operator=(TripodCameraActivatedComponent const&);
    TripodCameraActivatedComponent(TripodCameraActivatedComponent const&);
    TripodCameraActivatedComponent();
};
