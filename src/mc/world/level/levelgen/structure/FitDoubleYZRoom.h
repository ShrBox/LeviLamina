#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MonumentRoomFitter.h"

class FitDoubleYZRoom : public ::MonumentRoomFitter {
public:
    // prevent constructor by default
    FitDoubleYZRoom& operator=(FitDoubleYZRoom const&);
    FitDoubleYZRoom(FitDoubleYZRoom const&);
    FitDoubleYZRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FitDoubleYZRoom() = default;

    // vIndex: 1
    virtual bool fits(class RoomDefinition const& definition) const;

    // vIndex: 2
    virtual std::unique_ptr<class OceanMonumentPiece>
    create(int& orientation, std::shared_ptr<class RoomDefinition> definition, class Random& random);

    // NOLINTEND
};
