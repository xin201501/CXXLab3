#pragma once
#include "Shape.h"
#include <iostream>
class CCircle : public Shape {
public:
    CCircle(const ColorType &color = White) : Shape(color) {}
    void draw() override {
        std::cout << "this is a circle!\n";
    }
};