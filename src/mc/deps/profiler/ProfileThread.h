#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class ProfileThread {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ProfileThread(char const*);

    MCAPI ~ProfileThread();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(char const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Core::Profile
