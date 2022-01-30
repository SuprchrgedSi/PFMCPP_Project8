#pragma once
#include<string>
#include "Vehicle.h"

struct Car : Vehicle
{
    Car(const std::string& s);
    Car(const Car&);
    Car& operator=(const Car&);
    
    ~Car() override;

    void closeWindows();

    void tryToEvade() override;
};
