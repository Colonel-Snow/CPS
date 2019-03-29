//
// Created by kerne on 3/22/2019.
//
#include <iostream>
#include "polygon.h"
#include "circle.h"
#include "polygon.h"
#include "rectangle.h"
#include "spacer.h"
#include "square.h"
#include "triangle.h"

int main(){
    Polygon hexagon(6, 1.0);
    std::cout << hexagon.getHeight() << std::endl;
    Circle circle(3);
    std::cout << circle.getWidth() << std::endl;
    return 0;
};
