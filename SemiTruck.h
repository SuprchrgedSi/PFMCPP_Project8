#pragma once
#include <string>
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& s) : Vehicle(s) {}
    
};
