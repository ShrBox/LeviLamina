#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EducationLocalLevelSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> codeBuilderOverrideUri;
    // NOLINTEND

public:
    // prevent constructor by default
    EducationLocalLevelSettings(EducationLocalLevelSettings const&);

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::EducationLocalLevelSettings& operator=(::EducationLocalLevelSettings const&);

    MCAPI ~EducationLocalLevelSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
