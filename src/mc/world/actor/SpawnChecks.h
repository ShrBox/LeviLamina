#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class ILevel;
class Randomize;
class ServerLevel;
// clang-format on

class SpawnChecks {
public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static bool canHatchEgg(::ILevel const& level);

    MCFOLD static bool canRespawnEnderDragon(::ILevel const& level);

    MCFOLD static bool canReviveBees(::ILevel const& level);

    MCFOLD static bool canSpawnBees(::ILevel const& level);

    MCAPI static bool canSpawnEnderDragon(::ServerLevel const& level);

    MCFOLD static bool canSpawnFromMobSpawnerBlock(::ILevel const& level);

    MCFOLD static bool canSpawnNaturally(::ILevel const& level);

    MCAPI static bool canSpawnPigZombieFromPortal(::Dimension const& dimension, ::Randomize const& randomize);

    MCAPI static bool canSpawnSkeletonTrap(::ILevel const& level, ::Randomize const& randomize);

    MCFOLD static bool canSpawnTadpoles(::ILevel const& level);

    MCFOLD static bool canSpawnVillageDwellers(::ILevel const& level);

    MCAPI static bool canSpawnWanderingTrader(::ServerLevel const& level);

    MCFOLD static bool canSpawnWarden(::ILevel const& level);

    MCAPI static bool canSpawnWithWorldGeneration(::ILevel const& level);

    MCFOLD static bool canTriggerRaid(::ILevel const& level);

    MCAPI static bool shouldAbortRaid(::ILevel const& level);

    MCAPI static bool shouldPauseRaid(::ILevel const& level);
    // NOLINTEND
};
