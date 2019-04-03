//
// Created by kerne on 3/22/2019.
//
#include <iostream>
#include <fstream>
using std::ofstream;
#include "polygon.h"
#include "circle.h"
#include "polygon.h"
#include "rectangle.h"
#include "spacer.h"
#include "square.h"
#include "triangle.h"
#include "rotated.h"
#include "scaled.h"
#include "layered.h"
#include "vertical.h"
#include "horizontal.h"

int main() {
    ofstream myfile;
    myfile.open ("CtoPS.ps");
    myfile << "%! \n";
    //myfile << Circle(100).evaluate();
    //myfile << Polygon(1, 200).evaluate();
    //myfile << Polygon(4, 200).evaluate();
    //myfile << Polygon(3, 100).evaluate(); // triangle is rotated weird
    //myfile << Rectangle(300, 200).evaluate();
    //myfile << Spacer(300, 200).evaluate();
    //myfile << Square(200).evaluate();
    myfile << Triangle(100).evaluate();
    myfile.close();
    return 0;
};
