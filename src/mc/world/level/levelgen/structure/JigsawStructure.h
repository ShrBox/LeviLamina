#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/Structure.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class GenerationStub; }
namespace br::worldgen { struct GenerationContext; }
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

struct JigsawStructure : public ::br::worldgen::Structure {
public:
    // prevent constructor by default
    JigsawStructure& operator=(JigsawStructure const&);
    JigsawStructure(JigsawStructure const&);
    JigsawStructure();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~JigsawStructure();

    // vIndex: 1
    virtual std::optional<class br::worldgen::GenerationStub>
    findValidGenerationPoint(struct br::worldgen::GenerationContext&) const;

    // NOLINTEND
};

}; // namespace br::worldgen
