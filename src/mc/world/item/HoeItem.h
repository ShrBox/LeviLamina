#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/DiggerItem.h"
#include "mc/world/item/Item.h"

class HoeItem : public ::DiggerItem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 54
    virtual int getEnchantSlot() const /*override*/;

    // vIndex: 0
    virtual ~HoeItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HoeItem(::std::string const& name, int id, ::Item::Tier const& tier);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::Item::Tier const& tier);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getEnchantSlot() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
