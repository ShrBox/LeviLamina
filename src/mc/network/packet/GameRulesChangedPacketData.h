#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameRule;
// clang-format on

class GameRulesChangedPacketData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::GameRule>> mRules;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addRule(::GameRule const& rule);

    MCFOLD ::std::vector<::GameRule> const& getRules() const;

    MCAPI void setRules(::std::vector<::GameRule> rules);

    MCAPI ~GameRulesChangedPacketData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
