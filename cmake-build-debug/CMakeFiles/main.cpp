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
#include "spiral.h"

int main() {

    std::cout << "Making PostScript files...";
    ofstream myfile;
    myfile.open ("circle.ps");
    myfile << "%! \n";
    myfile << Circle(100).evaluate();
    myfile << "stroke \n showpage\n";
    myfile.close();

    myfile.open ("line.ps");
    myfile << "%! \n";
    myfile << Polygon(1, 200).evaluate();
    myfile << "\n stroke \n showpage \n";
    myfile.close();


    myfile.open ("polygon4.ps");
    myfile << "%! \n";
    myfile << Polygon(4, 200).evaluate();
    myfile << "\n stroke \n showpage \n";
    myfile.close();

    myfile.open ("polygon3.ps");
    myfile << "%! \n";
    myfile << Polygon(3, 100).evaluate(); // triangle is rotated weird
    myfile << "\n stroke \n showpage \n";
    myfile.close();

    myfile.open ("rectangle.ps");
    myfile << "%! \n";
    myfile << Rectangle(300, 200).evaluate();
    myfile << "\n stroke \n showpage \n";
    myfile.close();

    myfile.open ("spacer.ps");
    myfile << "%! \n";
    myfile << Spacer(300, 200).evaluate();
    myfile << "\n showpage \n";
    myfile.close();

    myfile.open ("square.ps");
    myfile << "%! \n";
    myfile << Square(200).evaluate();
    myfile << "\n stroke \n showpage \n";
    myfile.close();

    myfile.open ("triangle.ps");
    myfile << "%! \n";
    myfile << Triangle(100).evaluate();
    myfile << "stroke \n showpage \n";
    myfile.close();

    myfile.open ("spiral.ps");
    myfile << "%! \n";
    myfile << Spiral(100).evaluate();
    myfile << "\n showpage \n";
    myfile.close();


    Triangle tri(100);
    Rectangle rec(100, 200);
    Circle cir(100);

    myfile.open("rotated.ps");
    myfile << Rotated(tri, 180).evaluate();
    myfile.close();

    myfile.open("scaled.ps");
    myfile << Scaled(rec, 3, 1).evaluate();
    myfile.close();

    myfile.open("vertical.ps");
    myfile << Vertical(tri, rec, cir).evaluate();
    myfile.close();

    myfile.open("horizontal.ps");
    myfile << Horizontal(tri, rec, cir).evaluate();
    myfile.close();

    myfile.open("layered.ps");
    myfile << Layered(tri, rec, cir).evaluate();
    myfile.close();

    std::cout << "DONE." << std::endl;
    return 0;
};
