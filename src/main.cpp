#include "CThreePoint.h"
#include "vehicle/bicycle.h"
#include "vehicle/motorcar.h"
#include "vehicle/motorcycle.h"
#include <iostream>
int main() {
    CPoint *point = new CThreePoint(1, 1, 1);
    //若不声明为虚函数下面会调用CPoint基类的ShowPoint()
    point->ShowPoint();
    std::cout << '\n';
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
    vehiclePtr = &motorcycleInstance;
    vehiclePtr->Run();
    vehiclePtr->Stop();
    return 0;
}