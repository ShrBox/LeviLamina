#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class CompoundTag;
class DataLoadHelper;
class MerchantRecipeList;
class Player;
class UpdateTradePacket;
struct IntRange;
struct Tick;
struct Trade;
struct TradeTable;
// clang-format on

class EconomyTradeableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk59fee2;
    ::ll::UntypedStorage<4, 4>  mUnkaa12b0;
    ::ll::UntypedStorage<1, 1>  mUnk698dba;
    ::ll::UntypedStorage<4, 4>  mUnkd43c37;
    ::ll::UntypedStorage<8, 8>  mUnkaf6f5f;
    ::ll::UntypedStorage<8, 8>  mUnkdfc605;
    ::ll::UntypedStorage<8, 32> mUnk70e3fb;
    ::ll::UntypedStorage<8, 32> mUnkf1b3ea;
    ::ll::UntypedStorage<1, 1>  mUnk6e61ae;
    ::ll::UntypedStorage<4, 4>  mUnkf5aad7;
    // NOLINTEND

public:
    // prevent constructor by default
    EconomyTradeableComponent& operator=(EconomyTradeableComponent const&);
    EconomyTradeableComponent(EconomyTradeableComponent const&);
    EconomyTradeableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EconomyTradeableComponent(::Actor& owner);

    MCAPI bool _generateTrades();

    MCAPI ::TradeTable* _getTradeTable();

    MCAPI void _rearrangeTradeList(::std::vector<::Trade>& tradeList, uint64 sampleCount);

    MCAPI void _setMaxTradeTier(int tradeTier);

    MCAPI void _setTradeTier(int tradeTier);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI ::UpdateTradePacket createDataPacket(::ContainerID containerID);

    MCAPI void fixVillagerTierToMatchTradeList(::MerchantRecipeList* oldOffers);

    MCAPI ::IntRange getCurrentCuredDiscount() const;

    MCFOLD ::std::string const& getDisplayName() const;

    MCAPI bool getInteraction(::Player& player, ::ActorInteraction& interaction);

    MCAPI ::MerchantRecipeList* getOffers();

    MCFOLD int getRiches() const;

    MCAPI uint getTradeTier() const;

    MCAPI bool hasSupplyRemaining() const;

    MCFOLD void initFromDefinition();

    MCAPI ::std::string const& loadDisplayName();

    MCAPI void loadOffersFromTag(::CompoundTag const* tag);

    MCAPI void matchExpAndTier();

    MCAPI void newServerAiStep();

    MCAPI void notifyTrade(int recipeIndex, int numTrades);

    MCAPI void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void reloadComponent();

    MCAPI void resupplyTrades();

    MCAPI void setNearbyCuredDiscount(int discount);

    MCAPI void setOffers(::MerchantRecipeList& offers);

    MCFOLD void setRiches(int riches);

    MCAPI bool shouldConvertTrades() const;

    MCAPI bool shouldPersistTrades() const;

    MCAPI bool showTradeScreen();

    MCAPI void tickDiscountDegradationTimer(::Tick currentTick);

    MCAPI void tryIncrementCuredDiscount();

    MCAPI void tryIncrementNearbyCuredDiscount();

    MCAPI void tryToTransferOldOffers(::MerchantRecipeList* oldOffers);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isUseNewTradeScreen(::Actor const& owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor& owner);
    // NOLINTEND
};
