#pragma once
#include "Shape.h"
#include <iostream>
class CRectangle : public Shape {
public:
    CRectangle(const ColorType &color = White) : Shape(color) {}
    void draw() override {
        std::cout << "this is a rectangle!\n";
    }
};