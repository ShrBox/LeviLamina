#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/util/BytesDataInput.h"

class RakDataInput : public ::BytesDataInput {
public:
    // prevent constructor by default
    RakDataInput& operator=(RakDataInput const&);
    RakDataInput(RakDataInput const&);
    RakDataInput();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RakDataInput();

    // vIndex: 9
    virtual class Bedrock::Result<void> readBytesResult(void*, uint64);

    // vIndex: 10
    virtual uint64 numBytesLeft() const;

    // NOLINTEND
};
