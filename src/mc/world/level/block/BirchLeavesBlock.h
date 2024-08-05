#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/LeavesBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BirchLeavesBlock : public ::LeavesBlock {
public:
    // prevent constructor by default
    BirchLeavesBlock& operator=(BirchLeavesBlock const&);
    BirchLeavesBlock(BirchLeavesBlock const&);
    BirchLeavesBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BirchLeavesBlock() = default;

    // vIndex: 122
    virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 129
    virtual int getVariant(class Block const&) const;

    // vIndex: 156
    virtual ::BlockRenderLayer getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;

    // vIndex: 160
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    MCAPI BirchLeavesBlock(std::string const&, int, class WeakPtr<class BlockLegacy const>);

    // NOLINTEND
};
