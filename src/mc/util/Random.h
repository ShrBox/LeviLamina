#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"

class Random {
public:
    // prevent constructor by default
    Random& operator=(Random const&);
    Random(Random const&);

public:
    // NOLINTBEGIN
    MCVAPI void consumeCount(uint count);

    MCVAPI std::unique_ptr<class IRandom> fork();

    MCVAPI bool nextBoolean();

    MCVAPI double nextDouble();

    MCVAPI float nextFloat();

    MCVAPI double nextGaussianDouble();

    MCVAPI int nextInt();

    MCVAPI int nextInt(int n);

    MCVAPI int64 nextLong();

    MCVAPI ~Random();

    MCAPI Random();

    MCAPI Random(uint seed, bool);

    MCAPI float nextFloat(float, float);

    MCAPI float nextGaussianFloat();

    MCAPI int nextGaussianInt(int);

    MCAPI int nextInt(int min, int max);

    MCAPI int nextIntInclusive(int min, int max);

    MCAPI static class Random& getThreadLocal();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Random> mThreadLocalRandom;

    // NOLINTEND
};
