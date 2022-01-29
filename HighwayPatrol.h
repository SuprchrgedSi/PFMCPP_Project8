#pragma once 

#include "Vehicle.h"

struct Highway;
// struct Vehicle;
struct HighwayPatrol : Vehicle
{
    HighwayPatrol();
    void scanHighway(Highway* h);

    void pullOver( Vehicle* v, bool willArrest, Highway* h );
};
