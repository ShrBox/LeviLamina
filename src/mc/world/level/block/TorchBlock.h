#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/TorchFacing.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Random;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class TorchBlock : public ::BlockLegacy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 92
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 5
    virtual ::AABB
    getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<::GetCollisionShapeInterface const>)
        const /*override*/;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const
        /*override*/;

    // vIndex: 143
    virtual ::BlockRenderLayer getRenderLayer(::Block const&, ::BlockSource&, ::BlockPos const&) const /*override*/;

    // vIndex: 142
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 136
    virtual void tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    // vIndex: 0
    virtual ~TorchBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TorchBlock(::std::string const& nameId, int id);

    MCAPI ::Vec3 _flameParticlePos(::BlockPos const& pos, ::TorchFacing dir) const;

    MCAPI bool canBePlacedOn(::BlockSource& region, ::BlockPos const& pos, uchar facing) const;

    MCAPI void onPlaceTorchBlock(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<::TorchFacing const[]> DATA_FROM_FACING();

    MCAPI static ::std::add_lvalue_reference_t<ushort const[]> FACING_FROM_DATA();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::Block const&
    $getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue)
        const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCFOLD ::AABB
    $getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<::GetCollisionShapeInterface const>)
        const;

    MCAPI void $animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCFOLD ::BlockRenderLayer $getRenderLayer(::Block const&, ::BlockSource&, ::BlockPos const&) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
