#include "vehicle.h"
#include <iostream>
class motorcar : public vehicle {
private:
    size_t SeatNum;

public:
    using vehicle::vehicle;
    motorcar(size_t MaxSpeed = 0, size_t Weight = 0, size_t SeatNum = 0) : vehicle(MaxSpeed, Weight), SeatNum(SeatNum) {}
    size_t getSeatNum() const {
        return SeatNum;
    }
    void setSeatNum(size_t seatNum) {
        SeatNum = seatNum;
    }
    void Run() {
        std::cout << "motorcar runs.\n";
    }
    void Stop() {
        std::cout << "motorcar stops.\n";
    }
};