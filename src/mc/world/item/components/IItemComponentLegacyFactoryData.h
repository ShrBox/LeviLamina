#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IItemComponentLegacyFactoryData {
public:
    // IItemComponentLegacyFactoryData inner types declare
    // clang-format off
    struct Components;
    // clang-format on

    // IItemComponentLegacyFactoryData inner types define
    struct Components {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnka5adbd;
        // NOLINTEND

    public:
        // prevent constructor by default
        Components(Components const&);
        Components();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::IItemComponentLegacyFactoryData::Components&
        operator=(::IItemComponentLegacyFactoryData::Components const&);
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IItemComponentLegacyFactoryData() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
