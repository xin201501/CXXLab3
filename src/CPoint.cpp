#include "CPoint.h"
CPoint::CPoint(int px, int py) : x(px), y(py) {
    nCount++;
}
CPoint::CPoint(CPoint &point) : CPoint(point.x, point.y) {}
CPoint::~CPoint() {
    nCount--;
}
int CPoint::GetX() const {
    return x;
}
int CPoint::GetY() const {
    return y;
}
void CPoint::SetX(int x_) {
    x = x_;
}
void CPoint::SetY(int y_) {
    y = y_;
}
void CPoint::ShowPoint() {
    std::cout << "x:" << x << " y:" << y;
}
std::istream &operator>>(std::istream &is, CPoint &p) {
    is >> p.x >> p.y;
    if (!is) {
        p = CPoint();
    }
    return is;
}
std::ostream &operator<<(std::ostream &os, const CPoint &p) {
    os << p.x << ' ' << p.y;
    return os;
}
int CPoint::nCount = 0;