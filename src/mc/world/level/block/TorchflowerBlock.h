#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/FlowerBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class TorchflowerBlock : public ::FlowerBlock {
public:
    // prevent constructor by default
    TorchflowerBlock& operator=(TorchflowerBlock const&);
    TorchflowerBlock(TorchflowerBlock const&);
    TorchflowerBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TorchflowerBlock() = default;

    // vIndex: 80
    virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, ::FertilizerType) const;

    // vIndex: 82
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 165
    virtual class ItemInstance const getBaseSeed() const;

    // vIndex: 166
    virtual void onLand(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 167
    virtual bool isFreeToFall(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 168
    virtual void
    startFalling(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    // vIndex: 169
    virtual int getInputSignal(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 170
    virtual bool isAlternateInput(class Block const& block) const;

    // vIndex: 171
    virtual int getAlternateSignal(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 172
    virtual int getOutputSignal(class Block const& block) const;

    // vIndex: 173
    virtual int getTurnOffDelay(class Block const& block) const;

    // vIndex: 174
    virtual int getTurnOnDelay(class Block const& block) const;

    // vIndex: 175
    virtual class Block const* getOnBlock(class Block const* block) const;

    // vIndex: 176
    virtual class Block const* getOffBlock(class Block const* block) const;

    MCAPI TorchflowerBlock(std::string const&, int);

    // NOLINTEND
};
