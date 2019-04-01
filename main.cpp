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

int runPostScript() {
    ofstream myfile;
    myfile.open ("CtoPS.ps");
    myfile << "%! \n";
    myfile.close();
    return 0;
};
