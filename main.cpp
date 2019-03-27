//
// Created by kerne on 3/22/2019.
//
#include <iostream>
#include "polygon.h"
int main(){
    Polygon hexagon(6, 1.0);
    std::cout << hexagon.getHeight() << std::endl;
    return 0;
};
