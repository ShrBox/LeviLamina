#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Common {

struct BuildInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::std::string mBuildId;
    ::std::string mCommitId;
    ::std::string mBranchId;
    ::std::string mFlavor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BuildInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Common
