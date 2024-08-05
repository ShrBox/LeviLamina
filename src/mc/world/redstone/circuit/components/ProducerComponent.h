#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"

class ProducerComponent : public ::BaseCircuitComponent {
public:
    // prevent constructor by default
    ProducerComponent& operator=(ProducerComponent const&);
    ProducerComponent(ProducerComponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ProducerComponent() = default;

    // vIndex: 3
    virtual void setStrength(int strength);

    // vIndex: 8
    virtual bool canStopPower() const;

    // vIndex: 9
    virtual void setStopPower(bool bPower);

    // vIndex: 12
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const& info, bool&);

    // vIndex: 14
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);

    // vIndex: 23
    virtual ::CircuitComponentType getCircuitComponentType() const;

    MCAPI ProducerComponent();

    MCAPI void allowAttachments(bool bAttached);

    // NOLINTEND
};
