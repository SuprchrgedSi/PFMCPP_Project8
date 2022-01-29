#pragma once
#include<string>
#include "Vehicle.h"

struct Car : public Vehicle
{
    Car(const std::string& s);
    Car(const Car&) = default;
    Car& operator=(const Car&) = default;
    
    ~Car() override = default;

    void closeWindows();

    void tryToEvade() override;
};
