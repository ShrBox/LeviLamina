#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AnimationMode.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

// auto generated forward declare list
// clang-format off
class StructureTemplate;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { struct ScriptInvalidStructureError; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptStructureTemplate {
public:
    // prevent constructor by default
    ScriptStructureTemplate& operator=(ScriptStructureTemplate const&);
    ScriptStructureTemplate();

public:
    // NOLINTBEGIN
    MCAPI ScriptStructureTemplate(class ScriptModuleMinecraft::ScriptStructureTemplate const&);

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>,
        struct ScriptModuleMinecraft::ScriptInvalidStructureError,
        struct Scripting::InvalidArgumentError>
    getBlockPermutation(class Vec3 const&) const;

    MCAPI class Scripting::Result<class Vec3, struct ScriptModuleMinecraft::ScriptInvalidStructureError>
    getSize() const;

    MCAPI class Scripting::
        Result<bool, struct ScriptModuleMinecraft::ScriptInvalidStructureError, struct Scripting::InvalidArgumentError>
        isWaterlogged(class Vec3 const&) const;

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptStructureTemplate>,
        struct ScriptModuleMinecraft::ScriptInvalidStructureError,
        struct Scripting::EngineError,
        struct Scripting::InvalidArgumentError>
    saveAs(std::string const&, ::StructureRedstoneSaveMode);

    MCAPI class Scripting::Result<void, struct ScriptModuleMinecraft::ScriptInvalidStructureError> saveToWorld();

    MCAPI class Scripting::Result<
        void,
        struct Scripting::InvalidArgumentError,
        struct ScriptModuleMinecraft::ScriptInvalidStructureError>
    setBlockPermutation(class Vec3 const&, std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptStructureTemplate> bind();

    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::AnimationMode> bindAnimationModeEnum();

    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::Mirror> bindMirrorEnum();

    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::Rotation> bindRotationEnum();

    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::StructureRedstoneSaveMode>
    bindStructureSaveModeEnum();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class StructureTemplate* _getStructureTemplate() const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
