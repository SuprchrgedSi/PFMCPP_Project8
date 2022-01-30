#pragma once
#include <string>
#include "Vehicle.h"

struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& s);

    virtual ~SemiTruck() override;
    SemiTruck(const SemiTruck&);
    SemiTruck& operator=(const SemiTruck&);
    
    void honkForSpace();
    void dontEvade(); // Semis will not try to evade when this is called

};
