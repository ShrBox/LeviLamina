#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Potion {
public:
    // Potion inner types define
    enum class PotionType {};

    enum class PotionVariant {};

public:
    // prevent constructor by default
    Potion& operator=(Potion const&);
    Potion(Potion const&);
    Potion();

public:
    // NOLINTBEGIN
    MCAPI void appendFormattedPotionText(
        std::string&            hovertext,
        ::Potion::PotionType    potionType,
        ::Potion::PotionVariant potionVariant,
        class Player const&     player,
        float                   timeMod
    ) const;

    MCAPI std::string getDescriptionId() const;

    MCAPI std::string getDescriptionId(::Potion::PotionType) const;

    MCAPI class MobEffectInstance const& getMobEffect() const;

    MCAPI int getMobEffectId() const;

    MCAPI std::vector<class MobEffectInstance> const& getMobEffects() const;

    MCAPI std::string getPotencyDescription(::Potion::PotionType, float) const;

    MCAPI int getPotionId() const;

    MCAPI ::Potion::PotionVariant getPotionVariant() const;

    MCAPI std::string getPrefix() const;

    MCAPI ~Potion();

    MCAPI static void appendMobEffectText(std::string&, ::Potion::PotionVariant, uint, int, class Player const&);

    MCAPI static std::string effectDurationToString(::Potion::PotionType, float, class MobEffectInstance const&);

    MCAPI static std::string effectPotencyToString(class MobEffectInstance const&);

    MCAPI static std::string getBasePotion(::Potion::PotionType);

    MCAPI static std::string
    getPotencyDescription(::Potion::PotionType, float, std::string_view, class MobEffectInstance const&);

    MCAPI static std::shared_ptr<class Potion const> getPotion(std::string_view potionNameId);

    MCAPI static std::shared_ptr<class Potion const> getPotion(int potionId);

    MCAPI static int getPotionCount();

    MCAPI static void initPotions(class BaseGameVersion const&, class Experiments const&);

    MCAPI static void shutdownPotions();

    MCAPI static std::shared_ptr<class Potion const> const Awkward;

    MCAPI static std::shared_ptr<class Potion const> const FireResistance;

    MCAPI static std::shared_ptr<class Potion const> const Harming;

    MCAPI static std::shared_ptr<class Potion const> const Healing;

    MCAPI static std::shared_ptr<class Potion const> const Infested;

    MCAPI static std::shared_ptr<class Potion const> const Invisibility;

    MCAPI static std::shared_ptr<class Potion const> const Leaping;

    MCAPI static std::shared_ptr<class Potion const> const LongFireResistance;

    MCAPI static std::shared_ptr<class Potion const> const LongInvisibility;

    MCAPI static std::shared_ptr<class Potion const> const LongLeaping;

    MCAPI static std::shared_ptr<class Potion const> const LongMundane;

    MCAPI static std::shared_ptr<class Potion const> const LongNightvision;

    MCAPI static std::shared_ptr<class Potion const> const LongPoison;

    MCAPI static std::shared_ptr<class Potion const> const LongRegeneration;

    MCAPI static std::shared_ptr<class Potion const> const LongSlowFalling;

    MCAPI static std::shared_ptr<class Potion const> const LongSlowness;

    MCAPI static std::shared_ptr<class Potion const> const LongStrength;

    MCAPI static std::shared_ptr<class Potion const> const LongSwiftness;

    MCAPI static std::shared_ptr<class Potion const> const LongTurtleMaster;

    MCAPI static std::shared_ptr<class Potion const> const LongWaterBreathing;

    MCAPI static std::shared_ptr<class Potion const> const LongWeakness;

    MCAPI static std::shared_ptr<class Potion const> const Mundane;

    MCAPI static std::shared_ptr<class Potion const> const Nightvision;

    MCAPI static std::shared_ptr<class Potion const> const Oozing;

    MCAPI static std::shared_ptr<class Potion const> const Poison;

    MCAPI static std::shared_ptr<class Potion const> const Regeneration;

    MCAPI static std::shared_ptr<class Potion const> const SlowFalling;

    MCAPI static std::shared_ptr<class Potion const> const Slowness;

    MCAPI static std::shared_ptr<class Potion const> const Strength;

    MCAPI static std::shared_ptr<class Potion const> const StrongHarming;

    MCAPI static std::shared_ptr<class Potion const> const StrongHealing;

    MCAPI static std::shared_ptr<class Potion const> const StrongLeaping;

    MCAPI static std::shared_ptr<class Potion const> const StrongPoison;

    MCAPI static std::shared_ptr<class Potion const> const StrongRegeneration;

    MCAPI static std::shared_ptr<class Potion const> const StrongSlowness;

    MCAPI static std::shared_ptr<class Potion const> const StrongStrength;

    MCAPI static std::shared_ptr<class Potion const> const StrongSwiftness;

    MCAPI static std::shared_ptr<class Potion const> const StrongTurtleMaster;

    MCAPI static std::shared_ptr<class Potion const> const Swiftness;

    MCAPI static std::shared_ptr<class Potion const> const Thick;

    MCAPI static std::shared_ptr<class Potion const> const TurtleMaster;

    MCAPI static std::shared_ptr<class Potion const> const Water;

    MCAPI static std::shared_ptr<class Potion const> const WaterBreathing;

    MCAPI static std::shared_ptr<class Potion const> const Weakness;

    MCAPI static std::shared_ptr<class Potion const> const Weaving;

    MCAPI static std::shared_ptr<class Potion const> const WindCharged;

    MCAPI static std::shared_ptr<class Potion const> const Wither;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI Potion(
        std::string_view               nameId,
        std::string_view               descriptionID,
        class MobEffectInstance const& mobEffect,
        ::Potion::PotionVariant        var
    );

    MCAPI Potion(
        std::string_view                     nameId,
        std::vector<std::string>             descriptionIDs,
        std::vector<class MobEffectInstance> mobEffects,
        ::Potion::PotionVariant              var
    );

    MCAPI std::string _getDescriptionIdCombiningStrings(::Potion::PotionType) const;

    MCAPI std::string _getDescriptionIdSingleString(::Potion::PotionType) const;

    MCAPI static void addPotion(std::shared_ptr<class Potion const> potion);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int mLastId;

    MCAPI static std::shared_ptr<class Potion const> mPotionsById[];

    MCAPI static std::unordered_map<std::string, int> mPotionsByName;

    // NOLINTEND
};
