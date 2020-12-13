#include "vehicle/bicycle.h"
#include "vehicle/motorcar.h"
#include "vehicle/motorcycle.h"
int main() {
    vehicle vehicleInstance;
    bicycle bicycleInstance;
    motorcar motorcarInstance;
    motorcycle motorcycleInstance;
    vehicleInstance.Run();
    vehicleInstance.Stop();
    bicycleInstance.Run();
    bicycleInstance.Stop();
    motorcarInstance.Run();
    motorcarInstance.Stop();
    motorcycleInstance.Run();
    motorcycleInstance.Stop();
    vehicle *vehiclePtr = &vehicleInstance;
    vehiclePtr->Run();
    vehiclePtr->Stop();
    vehiclePtr = &bicycleInstance;
    vehiclePtr->Run();
    vehiclePtr->Stop();
    vehiclePtr = &motorcarInstance;
    vehiclePtr->Run();
    vehiclePtr->Stop();
    vehiclePtr = static_cast<motorcar *>(&motorcycleInstance);
    vehiclePtr->Run();
    vehiclePtr->Stop();
    return 0;
}