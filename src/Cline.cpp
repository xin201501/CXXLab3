#include "grahpics/Cline.h"
#include "grahpics/Shape.h"
#include "CPoint.h"
#include <cmath>
#include <iostream>
double Cline::Distance() {
    return sqrt(pow((pt1.GetX() - pt2.GetX()), 2) + pow((pt2.GetX() + pt2.GetY()), 2));
}
void Cline::ShowLine() {
    std::cout << "start point:";
    pt1.ShowPoint();
    std::cout << ' ' << "end point";
    pt2.ShowPoint();
}
Cline::Cline(int x1, int y1, int x2, int y2, const ColorType &color) : Shape(color), pt1(x1, y1), pt2(x2, y2) {}
Cline::Cline(CPoint p1, CPoint p2, const ColorType &color) : Shape(color), pt1(p1), pt2(p2) {}