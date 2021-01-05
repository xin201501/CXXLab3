#pragma once
#include "vehicle.h"
#include <iostream>
class motorcycle : public bicycle, public motorcar {
public:
    motorcycle(size_t MaxSpeed = 0, size_t Weight = 0, size_t Height = 0, size_t SeatNum = 0) : bicycle(MaxSpeed, Weight, Height), motorcar(SeatNum) {}
    void Run() override {
        std::cout << "motorcycle runs.\n";
    }
    void Stop() override {
        std::cout << "motorcycle stops.\n";
    }
};