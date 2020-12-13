#pragma once
#include "CPoint.h"
#include "Shape.h"
#include <iostream>
class Cline : public Shape {
public:
    void draw() override {
        std::cout << "this is a line\n";
    }

private:
    CPoint pt1{}, pt2{};//pt1和pt2分别代表该线段的起点和终点
public:
    Cline(int x1, int y1, int x2, int y2, const ColorType &color = White);
    Cline(const ColorType &color = White) : Shape(color) {}
    Cline(CPoint p1, CPoint p2, const ColorType &color = White);
    double Distance();//计算该线段长度的成员函数
    void ShowLine();
};