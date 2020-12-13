#pragma once
#include <iostream>
class vehicle {
private:
    size_t MaxSpeed;
    size_t Weight;

public:
    vehicle(size_t maxSpeed = 0, size_t weight = 0) : MaxSpeed(maxSpeed), Weight(weight) {}
    size_t getMaxSpeed() const {
        return MaxSpeed;
    }
    void setMaxSpeed(size_t maxSpeed) {
        MaxSpeed = maxSpeed;
    }
    size_t getWeight() const {
        return Weight;
    }
    void setWeight(size_t weight) {
        Weight = weight;
    }
    virtual void Run() {
        std::cout << "vehicle runs.\n";
    }
    virtual void Stop() {
        std::cout << "vehicle stops.\n";
    }
};