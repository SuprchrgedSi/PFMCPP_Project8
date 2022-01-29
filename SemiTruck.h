#pragma once
#include <string>
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& s);

    virtual ~SemiTruck() override = default;
    SemiTruck(const SemiTruck&) = default;
    SemiTruck& operator=(const SemiTruck&) = default;
    
    void honkForSpace(int s);
    void dontEvade() override; // Semis will not try to evade when this is called

};
