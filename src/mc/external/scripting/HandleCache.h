#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting {

class HandleCache {
public:
    // prevent constructor by default
    HandleCache& operator=(HandleCache const&);
    HandleCache(HandleCache const&);
    HandleCache();

public:
    // NOLINTBEGIN
    MCAPI void remove(struct Scripting::ObjectHandle const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _add(uint64, uint64, struct Scripting::ObjectHandle const&);

    MCAPI void _remove(uint64, uint64);

    MCAPI std::optional<struct Scripting::ObjectHandle> _tryGetHandle(uint64, uint64) const;

    // NOLINTEND
};

}; // namespace Scripting
