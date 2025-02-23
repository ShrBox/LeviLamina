#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DryingOutTimerComponent {
public:
    // DryingOutTimerComponent inner types declare
    // clang-format off
    class DryingOutTimerDefinition;
    // clang-format on

    // DryingOutTimerComponent inner types define
    class DryingOutTimerDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnk98b138;
        ::ll::UntypedStorage<4, 4>   mUnkacf736;
        ::ll::UntypedStorage<8, 104> mUnk654386;
        ::ll::UntypedStorage<8, 104> mUnkd7fabb;
        ::ll::UntypedStorage<8, 104> mUnkc1d3ee;
        // NOLINTEND

    public:
        // prevent constructor by default
        DryingOutTimerDefinition& operator=(DryingOutTimerDefinition const&);
        DryingOutTimerDefinition(DryingOutTimerDefinition const&);
        DryingOutTimerDefinition();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void initialize(::EntityContext& entity, ::DryingOutTimerComponent& dryingOutComponent) const;

        MCAPI ~DryingOutTimerDefinition();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
                                          ::JsonUtil::EmptyClass,
                                          ::DryingOutTimerComponent::DryingOutTimerDefinition>>& root);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    enum class DryingOutState : int {
        DryingOut             = 0,
        ExceededDryingOutTime = 1,
        StoppedDryingOut      = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 320> mUnka9c32c;
    ::ll::UntypedStorage<4, 4>   mUnk7f46b1;
    ::ll::UntypedStorage<4, 4>   mUnk3c1784;
    // NOLINTEND

public:
    // prevent constructor by default
    DryingOutTimerComponent& operator=(DryingOutTimerComponent const&);
    DryingOutTimerComponent(DryingOutTimerComponent const&);
    DryingOutTimerComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DryingOutTimerComponent(::DryingOutTimerComponent&&);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI bool canBeAffectedByWaterBottle() const;

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI void refillTimeWithWaterBottle();

    MCAPI ~DryingOutTimerComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DryingOutTimerComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
