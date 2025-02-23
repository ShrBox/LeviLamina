#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/pathfinder/CanJumpIntoNode.h"
#include "mc/world/level/pathfinder/NodeType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionDescriptor;
class BlockDescriptor;
class BlockPos;
class Mob;
class Path;
class PathNavigation;
class Vec3;
struct NavigationDescription;
// clang-format on

class NavigationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkccd9b9;
    ::ll::UntypedStorage<1, 1>  mUnk1332a1;
    ::ll::UntypedStorage<1, 1>  mUnkdb0187;
    ::ll::UntypedStorage<1, 1>  mUnk63b384;
    ::ll::UntypedStorage<1, 1>  mUnk57e57d;
    ::ll::UntypedStorage<1, 1>  mUnk2576d4;
    ::ll::UntypedStorage<1, 1>  mUnk219f9d;
    ::ll::UntypedStorage<1, 1>  mUnkaf0b1b;
    ::ll::UntypedStorage<1, 1>  mUnk1be96c;
    ::ll::UntypedStorage<1, 1>  mUnk95547d;
    ::ll::UntypedStorage<1, 1>  mUnk4f905e;
    ::ll::UntypedStorage<1, 1>  mUnkb15a8a;
    ::ll::UntypedStorage<1, 1>  mUnk1bcad1;
    ::ll::UntypedStorage<1, 1>  mUnk1ac181;
    ::ll::UntypedStorage<1, 1>  mUnk4019cb;
    ::ll::UntypedStorage<1, 1>  mUnk55ba8b;
    ::ll::UntypedStorage<1, 1>  mUnk9fdea1;
    ::ll::UntypedStorage<4, 4>  mUnk88f8f0;
    ::ll::UntypedStorage<4, 4>  mUnk171928;
    ::ll::UntypedStorage<4, 4>  mUnk328357;
    ::ll::UntypedStorage<4, 4>  mUnk57ee2b;
    ::ll::UntypedStorage<4, 4>  mUnk75cee8;
    ::ll::UntypedStorage<4, 4>  mUnk30b327;
    ::ll::UntypedStorage<4, 12> mUnk84ff4d;
    ::ll::UntypedStorage<4, 12> mUnkaff12b;
    ::ll::UntypedStorage<8, 24> mUnkd6378d;
    ::ll::UntypedStorage<8, 8>  mUnk9887e2;
    ::ll::UntypedStorage<8, 8>  mUnk433a9e;
    // NOLINTEND

public:
    // prevent constructor by default
    NavigationComponent& operator=(NavigationComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NavigationComponent();

    MCAPI NavigationComponent(::NavigationComponent const& other);

    MCAPI ::std::unique_ptr<::Path> createPath(::Mob& owner, ::Vec3 const& position);

    MCAPI ::std::unique_ptr<::Path> createPath(::Mob& owner, ::Actor const& target);

    MCFOLD bool getAvoidDamageBlocks() const;

    MCFOLD bool getAvoidPortals() const;

    MCFOLD bool getAvoidSun() const;

    MCFOLD bool getAvoidWater() const;

    MCFOLD ::std::vector<::BlockDescriptor> const& getBlocksToAvoid() const;

    MCFOLD bool getCanBreach() const;

    MCFOLD bool getCanFloat() const;

    MCFOLD bool getCanJump() const;

    MCFOLD bool getCanOpenDoors() const;

    MCAPI bool getCanOpenIronDoors() const;

    MCFOLD bool getCanPassDoors() const;

    MCFOLD bool getCanPathOverLava() const;

    MCFOLD bool getCanSink() const;

    MCFOLD bool getCanWalkInLava() const;

    MCFOLD float getEndPathRadiusSqr() const;

    MCFOLD bool getHasDestination() const;

    MCAPI bool getHasEndPathRadius() const;

    MCFOLD bool getIsAmphibious() const;

    MCAPI bool getIsFollowingRivers() const;

    MCAPI ::Vec3 getLastStuckCheckPosition() const;

    MCAPI float getMaxDistance(::Actor const& owner) const;

    MCFOLD ::Path* getPath() const;

    MCFOLD float getSpeed() const;

    MCFOLD ::Vec3 const& getTargetOffset() const;

    MCFOLD float getTerminationThreshold() const;

    MCFOLD int getTickTimeout() const;

    MCAPI void incrementTick();

    MCAPI void initMultiTypeNavigationComponent(::Mob& entity, ::ActorDefinitionDescriptor& initDescription);

    MCAPI void initializeFromDefinition(::Mob& owner, ::NavigationDescription* description);

    MCAPI bool isDone() const;

    MCAPI ::NodeType isFree(
        ::Mob&            owner,
        ::BlockPos const& lastPathPos,
        ::BlockPos const& testPos,
        ::BlockPos const& size,
        ::CanJumpIntoNode jumpIntoNode
    );

    MCAPI bool isStuck(int stuckTimeThreshold) const;

    MCAPI bool moveTo(::Mob& owner, ::std::unique_ptr<::Path> newPath, float speed);

    MCAPI bool moveTo(::Mob& owner, ::Vec3 const& position, float speed);

    MCAPI bool moveTo(::Mob& owner, ::Actor& target, float speed);

    MCAPI bool moveTo(::Mob& owner, ::Vec3 const& position, float speed, ::Vec3 const& targetOffset);

    MCAPI ::NavigationComponent& operator=(::NavigationComponent&&);

    MCAPI void resetPath();

    MCFOLD void setAvoidDamageBlocks(bool avoidDamageBlocks);

    MCFOLD void setAvoidPortals(bool avoidPortals);

    MCAPI void setAvoidSun(bool avoidSun);

    MCFOLD void setAvoidWater(bool avoidWater);

    MCFOLD void setCanFloat(bool canFloat);

    MCFOLD void setCanJump(bool canJump);

    MCFOLD void setCanOpenDoors(bool canOpenDoors);

    MCAPI void setCanPassDoors(bool canPass);

    MCFOLD void setCanSink(bool canSink);

    MCAPI void setEndPathRadius(float radius);

    MCFOLD void setHasDestination(bool hasDestination);

    MCAPI void setHasEndPathRadius(bool hasEndPathRadius);

    MCAPI void setInternalType(::std::unique_ptr<::PathNavigation> type);

    MCAPI void setIsFollowingRivers(bool isFollowingRivers);

    MCAPI void setPath(::std::unique_ptr<::Path> path);

    MCAPI void setSpeed(float speed);

    MCAPI void setTargetOffset(::Vec3 const& targetOffset);

    MCAPI void setTerminationThreshold(float threshold);

    MCFOLD void setTickTimeout(int timeout);

    MCAPI void stop(::Mob& owner);

    MCAPI bool travel(::Mob& owner, float& xa, float& ya, float& za);

    MCAPI void update(::Mob& owner);

    MCAPI void updateLastStuckCheck(::Mob const& owner);

    MCAPI ~NavigationComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::NavigationComponent const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
