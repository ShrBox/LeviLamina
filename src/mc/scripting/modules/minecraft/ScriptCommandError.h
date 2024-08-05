#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

// auto generated forward declare list
// clang-format off
struct MCRESULT;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCommandError {
public:
    // prevent constructor by default
    ScriptCommandError& operator=(ScriptCommandError const&);
    ScriptCommandError(ScriptCommandError const&);
    ScriptCommandError();

public:
    // NOLINTBEGIN
    MCAPI ScriptCommandError(std::string messages, struct MCRESULT const& result);

    MCAPI ~ScriptCommandError();

    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptCommandError> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
