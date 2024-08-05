#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct SchemaReader; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal {

class BasicLoader {
public:
    // prevent constructor by default
    BasicLoader& operator=(BasicLoader const&);
    BasicLoader(BasicLoader const&);
    BasicLoader();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BasicLoader();

    MCAPI std::vector<std::string> getErrors() const;

    MCAPI std::vector<struct cereal::SerializerContext::LogEntry> const& getLog() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    loadImpl(struct cereal::SchemaReader&, entt::meta_handle, entt::meta_any const&, class cereal::internal::BasicSchema const&);

    // NOLINTEND
};

}; // namespace cereal
