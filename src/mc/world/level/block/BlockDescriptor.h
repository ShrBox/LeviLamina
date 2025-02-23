#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_50/BlockDescriptor.h"
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
class ExpressionNode;
class HashedString;
class SpinLockImpl;
namespace SharedTypes::v1_20_50 { struct BlockDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockDescriptor {
public:
    char filler[0xB8];

public:
    // BlockDescriptor inner types declare
    // clang-format off
    class ResolveHelper;
    class ResolvedState;
    struct State;
    // clang-format on

    // BlockDescriptor inner types define
    using CompoundProxy = ::SharedTypes::v1_20_50::BlockDescriptor::Compound;

    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::HashedString>                                     mName;
        ::ll::TypedStorage<8, 40, ::SharedTypes::v1_20_50::BlockDescriptor::Compound> mState;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI State(::HashedString name, int intState);

        MCAPI State(::HashedString name, ::SharedTypes::v1_20_50::BlockDescriptor::Compound state);

        MCAPI State(::HashedString name, ::std::string const& stringState);

        MCAPI ~State();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::HashedString name, int intState);

        MCAPI void* $ctor(::HashedString name, ::SharedTypes::v1_20_50::BlockDescriptor::Compound state);

        MCAPI void* $ctor(::HashedString name, ::std::string const& stringState);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    class ResolvedState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk7353ba;
        ::ll::UntypedStorage<4, 4> mUnkd8a867;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResolvedState& operator=(ResolvedState const&);
        ResolvedState(ResolvedState const&);
        ResolvedState();
    };

    enum class CompareType : int {
        AnyTag    = 0,
        BlockName = 1,
        States    = 2,
        Unknown   = 3,
    };

    class ResolveHelper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockDescriptor&> mBlockDescriptor;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void resolve(bool logInvalidBlocks);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockDescriptor::ResolveHelper>                 mResolveHelper;
    ::ll::TypedStorage<8, 48, ::HashedString>                                  mBlockName;
    ::ll::TypedStorage<1, 1, bool>                                             mIsComplexAlias;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ExpressionNode>>             mTags;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor::State>>         mRawStates;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor::ResolvedState>> mResolvedStates;
    ::ll::TypedStorage<4, 4, ::BlockDescriptor::CompareType>                   mCompareType;
    ::ll::TypedStorage<1, 1, bool>                                             mContentLogOnError;
    ::ll::TypedStorage<8, 8, ::Block const*>                                   mBlock;
    ::ll::TypedStorage<1, 1, bool>                                             mValid;
    ::ll::TypedStorage<1, 1, bool>                                             mIsDeferred;
    ::ll::TypedStorage<8, 32, ::SpinLockImpl>                                  mLock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockDescriptor();

    MCAPI explicit BlockDescriptor(::SharedTypes::v1_20_50::BlockDescriptor desc);

    MCAPI explicit BlockDescriptor(::HashedString const& fullName);

    MCAPI BlockDescriptor(::BlockDescriptor&& rhs);

    MCAPI BlockDescriptor(::BlockDescriptor const& rhs);

    MCAPI BlockDescriptor(::std::string const& name, ::std::vector<::BlockDescriptor::State>&& states);

    MCAPI ::Block const& getBlockOrUnknownBlock() const;

    MCAPI ::BlockDescriptor::CompareType const& getCompareType() const;

    MCAPI ::std::string const& getFullName() const;

    MCFOLD ::std::vector<::BlockDescriptor::State> const& getStates() const;

    MCAPI ::std::string const& getTagExpression() const;

    MCAPI bool isValid() const;

    MCAPI bool matches(::Block const& block) const;

    MCAPI bool matches(::BlockDescriptor const& otherDescriptor) const;

    MCAPI void operator=(::BlockDescriptor&& rhs);

    MCAPI void operator=(::BlockDescriptor const& rhs);

    MCAPI bool operator==(::BlockDescriptor const& rhs) const;

    MCAPI void setContentLogOnError(bool value) const;

    MCAPI ::std::unique_ptr<::CompoundTag> toCompoundTag() const;

    MCAPI ::Block const* tryGetBlock() const;

    MCAPI ::Block const* tryGetBlockNoLogging() const;

    MCAPI ~BlockDescriptor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool anyMatch(::std::vector<::BlockDescriptor> const& blockDescriptors, ::Block const& block);

    MCAPI static bool
    anyMatch(::std::vector<::BlockDescriptor> const& blockDescriptors, ::BlockDescriptor const& otherBlockDescriptor);

    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::BlockDescriptor fromCompoundTag(::CompoundTag const& tag);

    MCAPI static ::BlockDescriptor fromTagExpression(::std::string const& tagExpression, ::MolangVersion molangVersion);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> JSON_NAME_FIELD();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> JSON_STATES_FIELD();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> JSON_TAGS_FIELD();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_20_50::BlockDescriptor desc);

    MCAPI void* $ctor(::HashedString const& fullName);

    MCAPI void* $ctor(::BlockDescriptor&& rhs);

    MCAPI void* $ctor(::BlockDescriptor const& rhs);

    MCAPI void* $ctor(::std::string const& name, ::std::vector<::BlockDescriptor::State>&& states);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
