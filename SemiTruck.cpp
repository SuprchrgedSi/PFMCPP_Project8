#include "SemiTruck.h"


SemiTruck::SemiTruck(const std::string& s) : Vehicle(s) {}

SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator=(const SemiTruck&) = default;
SemiTruck::~SemiTruck() = default;

void SemiTruck::honkForSpace()
{
    setSpeed(60);
    std::cout << "HONK!!! I need space." << std::endl;
}

void SemiTruck::dontEvade()
{
    std::cout << "Good afternoon officer, how can I help?" << std::endl;
}
