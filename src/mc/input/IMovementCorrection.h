#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/input/AdvanceFrameResult.h"
#include "mc/input/CorrectionType.h"
#include "mc/input/IReplayableActorInput.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
// clang-format on

struct IMovementCorrection : public ::IReplayableActorInput {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::AdvanceFrameResult getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const&);

    // vIndex: 3
    virtual void advanceLiveFrame(::Actor&, ::std::optional<uint64>);

    // vIndex: 4
    virtual ::CorrectionType getCorrectionType() const = 0;

    // vIndex: 0
    virtual ~IMovementCorrection() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
