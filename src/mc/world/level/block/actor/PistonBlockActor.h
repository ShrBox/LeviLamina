#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/actor/PistonState.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class IConstBlockSource;
class Level;
class SaveContext;
class Vec3;
// clang-format on

class PistonBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                        mSticky;
    ::ll::TypedStorage<4, 4, float>                                       mProgress;
    ::ll::TypedStorage<4, 4, float>                                       mLastProgress;
    ::ll::TypedStorage<1, 1, bool>                                        mWasPushedBackwardByANonStickyPiston;
    ::ll::TypedStorage<1, 1, bool>                                        mWasPulledForwardByAStickyPiston;
    ::ll::TypedStorage<1, 1, ::PistonState>                               mOldState;
    ::ll::TypedStorage<1, 1, ::PistonState>                               mState;
    ::ll::TypedStorage<1, 1, ::PistonState>                               mNewState;
    ::ll::TypedStorage<1, 1, bool>                                        mVerifyArm;
    ::ll::TypedStorage<1, 1, bool>                                        mShouldVerifyArmType;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                  mAttachedBlocks;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::BlockPos>>> mFutureClientAttachedBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                  mBreakBlocks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 13
    virtual void onRemoved(::BlockSource& region) /*override*/;

    // vIndex: 31
    virtual ::PistonBlockActor* getOwningPiston(::BlockSource&) /*override*/;

    // vIndex: 30
    virtual ::PistonBlockActor const* getOwningPiston(::BlockSource&) const /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~PistonBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PistonBlockActor(::BlockPos const& pos, bool isSticky);

    MCAPI bool _attachedBlockWalker(
        ::BlockSource&    region,
        ::BlockPos const& curPos,
        uchar             curBranchFacing,
        uchar             pistonMoveFacing
    );

    MCAPI bool _checkAttachedBlocks(::BlockSource& region);

    MCAPI void _checkInceptionAchievement(::BlockActor& be, ::BlockSource& region, ::BlockPos const& facingDir);

    MCAPI bool _handleSlimeConnections(
        ::BlockSource&    region,
        ::BlockPos const& curPos,
        uchar             curBranchFacing,
        uchar             pistonMoveFacing
    );

    MCAPI bool _hasBlockAttached(::BlockPos const& blockPos);

    MCAPI void _moveCollidedEntities(::BlockSource& region);

    MCAPI void _moveCollidedEntitiesHelper(
        ::BlockSource&    region,
        ::AABB const&     insideBlockAABB,
        ::BlockPos const& facingDir,
        ::Actor*          ignore,
        uint              searchHeight
    );

    MCAPI void _sortAttachedBlocks(::BlockSource& region);

    MCAPI void _spawnBlocks(::BlockSource& region);

    MCAPI void _spawnMovingBlock(::BlockSource& region, ::BlockPos const& blockPos);

    MCAPI void _spawnMovingBlocks(::BlockSource& region);

    MCAPI void _tryFixupStickyPistonArm(::BlockSource& region);

    MCFOLD ::std::vector<::BlockPos> const& getAttachedBlocks() const;

    MCAPI ::Block const* getCorrectArmBlock() const;

    MCAPI ::BlockPos const& getFacingDir(::IConstBlockSource const& region) const;

    MCAPI float getProgress(float a) const;

    MCAPI bool isExpanded() const;

    MCAPI bool isExpanding() const;

    MCAPI bool isMoving() const;

    MCAPI bool isRetracted() const;

    MCAPI bool isRetracting() const;

    MCAPI void moveEntityLastProgress(::Actor& entity, ::Vec3 delta);

    MCFOLD void setShouldVerifyArmType(bool shouldVerify);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& ARM_ANIMATION_SPEED();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos, bool isSticky);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $tick(::BlockSource& region);

    MCAPI void $onRemoved(::BlockSource& region);

    MCFOLD ::PistonBlockActor* $getOwningPiston(::BlockSource&);

    MCFOLD ::PistonBlockActor const* $getOwningPiston(::BlockSource&) const;

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
