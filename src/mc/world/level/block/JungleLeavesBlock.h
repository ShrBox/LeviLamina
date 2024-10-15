#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/LeavesBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class JungleLeavesBlock : public ::LeavesBlock {
public:
    // prevent constructor by default
    JungleLeavesBlock& operator=(JungleLeavesBlock const&);
    JungleLeavesBlock(JungleLeavesBlock const&);
    JungleLeavesBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~JungleLeavesBlock() = default;

    // vIndex: 122
    virtual int getColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 129
    virtual int getVariant(class Block const&) const;

    // vIndex: 156
    virtual ::BlockRenderLayer
    getRenderLayer(class Block const& block, class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 160
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    MCAPI JungleLeavesBlock(std::string const& nameId, int id, class WeakPtr<class BlockLegacy const> sapling);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class WeakPtr<class BlockLegacy const> sapling);

    MCAPI int getColor$(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    MCAPI class mce::Color getMapColor$(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    MCAPI ::BlockRenderLayer
    getRenderLayer$(class Block const& block, class BlockSource& region, class BlockPos const& pos) const;

    MCAPI int getVariant$(class Block const&) const;

    // NOLINTEND
};
