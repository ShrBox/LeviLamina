#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorBoolPropertyTest : public ::FilterTest {
public:
    // prevent constructor by default
    ActorBoolPropertyTest& operator=(ActorBoolPropertyTest const&);
    ActorBoolPropertyTest(ActorBoolPropertyTest const&);
    ActorBoolPropertyTest();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorBoolPropertyTest();

    // vIndex: 1
    virtual bool setup(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // vIndex: 2
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4
    virtual std::string_view getName() const;

    // vIndex: 5
    virtual class Json::Value _serializeDomain() const;

    // vIndex: 6
    virtual class Json::Value _serializeValue() const;

    // NOLINTEND
};
