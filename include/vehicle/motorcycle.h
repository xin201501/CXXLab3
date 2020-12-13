#pragma once
#include "vehicle.h"
#include <iostream>
class motorcycle : public bicycle, public motorcar {
public:
    using bicycle::bicycle;
    using motorcar::motorcar;
    motorcycle(size_t MaxSpeed = 0, size_t Weight = 0, size_t Height = 0, size_t SeatNum = 0) : bicycle(MaxSpeed, Weight, Height), motorcar(SeatNum) {}
    void Run() {
        std::cout << "motorcycle runs.\n";
    }
    void Stop() {
        std::cout << "motorcycle stops.\n";
    }
};