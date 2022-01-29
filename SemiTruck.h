#pragma once
#include <string>
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& s);

    virtual ~SemiTruck() override;
    SemiTruck(const SemiTruck&);
    SemiTruck& operator=(const SemiTruck&);
    
    void honkForSpace();
    void dontEvade() override; // Semis will not try to evade when this is called

};
