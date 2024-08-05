#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ExperiencePotionItem : public ::Item {
public:
    // prevent constructor by default
    ExperiencePotionItem& operator=(ExperiencePotionItem const&);
    ExperiencePotionItem(ExperiencePotionItem const&);
    ExperiencePotionItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExperiencePotionItem() = default;

    // vIndex: 19
    virtual bool isThrowable() const;

    // vIndex: 38
    virtual bool isGlint(class ItemStackBase const& stack) const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 73
    virtual class Actor*
    createProjectileActor(class BlockSource&, class ItemStack const&, class Vec3 const&, class Vec3 const&) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    MCAPI ExperiencePotionItem(std::string const& name, int id);

    // NOLINTEND
};
