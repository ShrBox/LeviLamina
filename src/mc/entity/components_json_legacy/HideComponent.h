#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
// clang-format on

class HideComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk63e831;
    ::ll::UntypedStorage<1, 1> mUnkdb1802;
    // NOLINTEND

public:
    // prevent constructor by default
    HideComponent& operator=(HideComponent const&);
    HideComponent(HideComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HideComponent();

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCFOLD bool isInRaid();

    MCFOLD bool isReactingToBell();

    MCAPI void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD void setInRaid();

    MCAPI void setNotHiding();

    MCFOLD void setReactingToBell();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
