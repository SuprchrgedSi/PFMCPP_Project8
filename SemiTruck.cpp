#include "SemiTruck.h"


SemiTruck::SemiTruck(const std::string& s) : Vehicle(s) {}
void SemiTruck::honkForSpace(int s)
{
    std::cout << "HONK!!! I need space." << std::endl;
    setSpeed(s);
}

void SemiTruck::dontEvade()
{
    std::cout << "Good afternoon officer, how can I help?" << std::endl;
}
