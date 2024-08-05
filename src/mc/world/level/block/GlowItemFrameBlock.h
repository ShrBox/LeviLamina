#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ItemFrameBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class GlowItemFrameBlock : public ::ItemFrameBlock {
public:
    // prevent constructor by default
    GlowItemFrameBlock& operator=(GlowItemFrameBlock const&);
    GlowItemFrameBlock(GlowItemFrameBlock const&);
    GlowItemFrameBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GlowItemFrameBlock() = default;

    // vIndex: 163
    virtual class HashedString getSpawnedItemName() const;

    MCAPI GlowItemFrameBlock(std::string const& nameId, int id);

    // NOLINTEND
};
