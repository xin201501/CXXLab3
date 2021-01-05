#pragma once
#include "vehicle.h"
#include <iostream>
class bicycle : virtual public vehicle {
private:
    size_t Height;

public:
    using vehicle::vehicle;
    bicycle(size_t maxSpeed = 0, size_t weight = 0, size_t height = 0) : vehicle(maxSpeed, weight), Height(height) {}
    size_t getHeight() const {
        return Height;
    }
    void setHeight(size_t height) {
        Height = height;
    }
    void Run() override {
        std::cout << "bicycle runs.\n";
    }
    void Stop() override {
        std::cout << "bicycle stops.\n";
    }
};