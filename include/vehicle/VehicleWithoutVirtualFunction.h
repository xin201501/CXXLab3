#pragma once
class VehicleWithoutVirtualFunction {
    size_t MaxSpeed;
    size_t Weight;

public:
    VehicleWithoutVirtualFunction(size_t maxSpeed = 0, size_t weight = 0) : MaxSpeed(maxSpeed), Weight(weight) {}
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
    void Run() {
        std::cout << "VehicleWithVirtualFunction runs.\n";
    }
    void Stop() {
        std::cout << "VehicleWithVirtualFunction stops.\n";
    }
};