#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/nbt/Tag.h"

class ByteTag : public ::Tag {
public:
    // prevent constructor by default
    ByteTag& operator=(ByteTag const&);
    ByteTag(ByteTag const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ByteTag();

    // vIndex: 2
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

    // vIndex: 4
    virtual std::string toString() const;

    // vIndex: 5
    virtual ::Tag::Type getId() const;

    // vIndex: 6
    virtual bool equals(class Tag const& rhs) const;

    // vIndex: 9
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10
    virtual uint64 hash() const;

    MCAPI ByteTag();

    MCAPI explicit ByteTag(uchar data);

    // NOLINTEND
};
