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
class Polygon: public Shape{
public:
    Polygon(int numSides, double sideLength): _numSides(numSides),_sideLength(sideLength)
    {
        _height = getHeight();
        _width = getWidth();
    }
    
    void setHeight(int numSides){
        if(_numSides % 2 == 1){
            _height = _sideLength*(1+cos(M_PI/_numSides))/(2*sin(M_PI/_numSides));
        }
        else if(_numSides % 4 == 0){
            _height = _sideLength*(cos(M_PI/_numSides))/(sin(M_PI/_numSides));
        }
        else if(_numSides % 2 == 0 && _numSides % 4 != 0){
            _height = _sideLength*(cos(M_PI/_numSides))/(sin(M_PI/_numSides));
        }
        else
            _height = 0;
    }
    
    void setWidth(int sides){
        if(_numSides % 2 == 1){
            _width = (_sideLength * sin(M_PI*(_numSides-1)/(2*_numSides)))/(sin(M_PI/_numSides));
        }
        else if(_numSides % 4 == 0){
            _width = (_sideLength * cos(M_PI/_numSides))/(sin(M_PI/_numSides));
        }
        else if(_numSides % 2 == 0 && _numSides % 4 != 0){
            _width = _sideLength/(sin(M_PI/_numSides));
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
    std::string generatePostScript(){
        std::string psCode;
        // horizontal line
        if(_numSides == 1){
            psCode = " newpath \n 72 72  moveto \n" + std::to_string(_sideLength) + " 0 rlineto \n closepath \n";
        }
        // triangle
        else if(_numSides == 3){
            psCode = " newpath \n 72 72 moveto \n" + std::to_string(_sideLength) + " 0 rlineto \n"
            + std::to_string(72/2) + " " + std::to_string(_sideLength*sqrt(3)/2) + " rlineto \n closepath \n";
        }
        // square
        else if(_numSides == 4){
            psCode = " newpath \n 72 72 moveto \n 0 " + std::to_string(_sideLength) + " rlineto \n "
                    + std::to_string(_sideLength) + " 0 rlineto \n 0 " + std::to_string((-1)*(_sideLength)) + " rlineto \n closepath \n";
        }
        else{
            psCode = " newpath\n" + std::to_string(- _sideLength /2) + " "
            + std::to_string(- getHeight() / 2) + " moveto\n" + " 1 1 " +
            std::to_string(_numSides) + " {\n" + std::to_string(_sideLength) +
            " 0 rlineto\n" + std::to_string(360.0 / _numSides) + " rotate\n"
            + "} for\n" + "clear\n";
        }
        return psCode;
    }
private:
    double _height;
    double _width;
    int _numSides;
    double _sideLength;
};

#endif /* polygon_h */
