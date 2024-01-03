#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/feature/registry/FeatureRegistry.h"

class WeakStorageFeature {
public:
    // WeakStorageFeature inner types define
    enum class EmptyInit : int {
        NoValue = 0,
    };

    std::optional<std::reference_wrapper<FeatureRegistry>> mRegistry; // this+0x0
    uint64                                                 mIndex;    // this+0x10

public:
    // prevent constructor by default
    WeakStorageFeature& operator=(WeakStorageFeature const&);
    WeakStorageFeature(WeakStorageFeature const&);
    WeakStorageFeature();

    // protected:
    // NOLINTBEGIN
    // symbol: ??0WeakStorageFeature@@IEAA@$$QEAV0@@Z
    MCAPI WeakStorageFeature(class WeakStorageFeature&& other);

    // symbol: ??0WeakStorageFeature@@IEAA@W4EmptyInit@0@@Z
    MCAPI explicit WeakStorageFeature(::WeakStorageFeature::EmptyInit);

    // symbol: ??4WeakStorageFeature@@IEAAAEAV0@$$QEAV0@@Z
    MCAPI class WeakStorageFeature& operator=(class WeakStorageFeature&& other);

    // NOLINTEND
};
