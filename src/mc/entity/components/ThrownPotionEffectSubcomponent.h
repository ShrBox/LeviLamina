#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/SplashPotionEffectSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ThrownPotionEffectSubcomponent : public ::SplashPotionEffectSubcomponent {
public:
    // prevent constructor by default
    ThrownPotionEffectSubcomponent& operator=(ThrownPotionEffectSubcomponent const&);
    ThrownPotionEffectSubcomponent(ThrownPotionEffectSubcomponent const&);
    ThrownPotionEffectSubcomponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThrownPotionEffectSubcomponent() = default;

    // vIndex: 2
    virtual void writetoJSON(class Json::Value& component) const;

    // vIndex: 3
    virtual void doOnHitEffect(class Actor& owner, class ProjectileComponent& component);

    // vIndex: 4
    virtual char const* getName();

    // NOLINTEND
};
