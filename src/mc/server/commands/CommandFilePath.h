#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandFilePath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mText;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandFilePath();

    MCAPI int findInvalidCharacter() const;

    MCFOLD ::std::string const& getText() const;

    MCAPI ~CommandFilePath();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
