#pragma once

#include <vector>
#include <algorithm>

struct Vehicle;
struct Highway
{
    void changeSpeed(int newSpeed);
    void addVehicle(Vehicle* v);
    void removeVehicle(Vehicle* v);
private:
    static void addVehicleInternal(Vehicle* v);
    static void removeVehicleInternal(Vehicle* v);
    int speedLimit = 65;
    std::vector<Vehicle*> vehicles;
    friend struct HighwayPatrol;
};
