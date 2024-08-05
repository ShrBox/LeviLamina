#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MangroveRootsBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    MangroveRootsBlock& operator=(MangroveRootsBlock const&);
    MangroveRootsBlock(MangroveRootsBlock const&);
    MangroveRootsBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MangroveRootsBlock() = default;

    // vIndex: 25
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    MCAPI MangroveRootsBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
