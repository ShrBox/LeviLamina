#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/feature/registry/FeatureRegistry.h"

class StackResultStorageFeature {
public:
    std::optional<std::reference_wrapper<FeatureRegistry>> mRegistry; // this+0x0
    uint64                                                 mIndex;    // this+0x10

public:
    // prevent constructor by default
    StackResultStorageFeature& operator=(StackResultStorageFeature const&);
    StackResultStorageFeature(StackResultStorageFeature const&);
    StackResultStorageFeature();

    // protected:
    // NOLINTBEGIN
    // symbol: ??0StackResultStorageFeature@@IEAA@AEBVWeakStorageFeature@@@Z
    MCAPI explicit StackResultStorageFeature(class WeakStorageFeature const& weakStorage);

    // symbol: ?_getStackRef@StackResultStorageFeature@@IEBAAEAVIFeature@@XZ
    MCAPI class IFeature& _getStackRef() const;

    // symbol: ?_hasValue@StackResultStorageFeature@@IEBA_NXZ
    MCAPI bool _hasValue() const;

    // NOLINTEND
};
