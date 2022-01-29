#pragma once 

#include "Vehicle.h"

struct Highway;
struct HighwayPatrol : Vehicle
{
    HighwayPatrol();

    virtual ~HighwayPatrol() override = default;
    HighwayPatrol(const HighwayPatrol&) = default;
    HighwayPatrol& operator=(const HighwayPatrol&) = default;

    void scanHighway(Highway* h);

    void pullOver( Vehicle* v, bool willArrest, Highway* h );

    void setSpeed(int s) override;
};
