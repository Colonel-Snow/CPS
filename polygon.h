//
//  polygon.h
//  CPS
//
//  Created by Erin Tolman on 3/25/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//
#include "Shape.h"
#ifndef polygon_h
#define polygon_h
#include <cmath>
#include
class Polygon: public Shape{
public:
    Polygon(int numSides, double sideLength): _numSides(numSides),_sideLength(sideLength)
    {
        _height = getHeight();
        _width = getWidth();
    }
    
    void setHeight(int numSides){
        if(_numSides % 2 == 1){
            _height = exp(1+cos(M_PI/_numSides))/(2*sin(M_PI/_numSides));
        }
        else if(_numSides % 4 == 0){
            _height = exp(cos(M_PI/_numSides))/(sin(M_PI/_numSides));
        }
        else if(_numSides % 2 == 0 && _numSides % 4 != 0){
            _height = exp(cos(M_PI/_numSides))/(sin(M_PI/_numSides));
        }
        else
            _height = 0;
    }
    
    void setWidth(int sides){
        if(_numSides % 2 == 1){
            _width = (exp(1) * sin(M_PI*(_numSides-1)/(2*_numSides)))/(sin(M_PI/_numSides));
        }
        else if(_numSides % 4 == 0){
            _width = (exp(1) * cos(M_PI/_numSides))/(sin(M_PI/_numSides));
        }
        else if(_numSides % 2 == 0 && _numSides % 4 != 0){
            _width = exp(1)/(sin(M_PI/_numSides));
        }
        else
            _width = 0;
    }
    
    double getHeight(){
        setHeight(_numSides);
        return _height;
    }
    
    double getWidth(){
        setWidth(_numSides);
        return _width;
    }
    std::string evaluate(){
        std::string psCode;
        // horizontal line
        if(_numSides == 1){
            psCode = "72 72  moveto \n" + _sideLength + " 0 rlineto \n stroke \n closepath \n showpage";
            return psCode;
        }
        // triangle
        else if(_numSides == 3){
            psCode = "newpath \n 72 72 moveto \n" + _sideLength + " 0 rlineto \n"
                    + 72/2 + " " _sideLength*sqrt(3)/2 + " rlineto \n closepath \n stroke \n showpage";
            return psCode;
        }
        // square
        else if(_numSides == 4){
            psCode = "new path \n 72 72 moveto \n 0 " + _sideLength + " rlineto \n "
                    + _sideLength + " 0 rlineto \n 0 " + _sideLength " rlineto \n closepath \n stroke \n showpage \n";
            return psCode;
        }

    }
private:
    double _height;
    double _width;
    int _numSides;
    double _sideLength;
};

#endif /* polygon_h */
