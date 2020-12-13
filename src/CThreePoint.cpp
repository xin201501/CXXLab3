#include "CThreePoint.h"
#include <iostream>
CThreePoint::CThreePoint() : CPoint(), z{0} {}
CThreePoint::CThreePoint(int x_, int y_, int z_) : CPoint(x_, y_), z{z_} {}
int CThreePoint::GetZ() const {
    return z;
}
void CThreePoint::SetZ(int pz) {
    z = pz;
}
void CThreePoint::ShowPoint() {
    CPoint::ShowPoint();
    std::cout << " z:" << z;
}