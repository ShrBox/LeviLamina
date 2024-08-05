#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorIsMovingTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    ActorIsMovingTest& operator=(ActorIsMovingTest const&);
    ActorIsMovingTest(ActorIsMovingTest const&);
    ActorIsMovingTest();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorIsMovingTest();

    // vIndex: 2
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4
    virtual std::string_view getName() const;

    // NOLINTEND
};
