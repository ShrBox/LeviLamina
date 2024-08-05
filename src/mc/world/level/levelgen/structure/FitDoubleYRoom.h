#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MonumentRoomFitter.h"

class FitDoubleYRoom : public ::MonumentRoomFitter {
public:
    // prevent constructor by default
    FitDoubleYRoom& operator=(FitDoubleYRoom const&);
    FitDoubleYRoom(FitDoubleYRoom const&);
    FitDoubleYRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FitDoubleYRoom() = default;

    // vIndex: 1
    virtual bool fits(class RoomDefinition const& definition) const;

    // vIndex: 2
    virtual std::unique_ptr<class OceanMonumentPiece>
    create(int& orientation, std::shared_ptr<class RoomDefinition> definition, class Random& random);

    // NOLINTEND
};
