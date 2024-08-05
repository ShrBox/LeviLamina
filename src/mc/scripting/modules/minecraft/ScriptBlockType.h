#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockType {
public:
    // prevent constructor by default
    ScriptBlockType& operator=(ScriptBlockType const&);
    ScriptBlockType();

public:
    // NOLINTBEGIN
    MCAPI ScriptBlockType(class ScriptModuleMinecraft::ScriptBlockType const&);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>
    createDefaultBlockPermutationV010() const;

    MCAPI class BlockLegacy const& getBlock() const;

    MCAPI std::string getId() const;

    MCAPI class ScriptModuleMinecraft::ScriptBlockType& operator=(class ScriptModuleMinecraft::ScriptBlockType&& rhs);

    MCAPI ~ScriptBlockType();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockType> bind();

    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>
    getOrCreateHandle(class Scripting::WeakLifetimeScope const& scope, class BlockLegacy const& block);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
