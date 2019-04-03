//
//  square.h
//  CPS
//
//  Created by Erin Tolman on 3/25/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//

#ifndef square_h
#define square_h
#include "polygon.h"
#include <string>

class Square: public Shape{
public:
    Square(double sideLength):_sideLength(sideLength)
    {}
    
    void setHeight(double height){
        _height = height;
    }
    void setWidth(double width){
        _width = width;
    }
    double getHeight(){
        setHeight(_sideLength);
        return _height;
    }
    double getWidth(){
        setWidth(_sideLength);
        return _width;
    }
    std::string evaluate(){
        std::string psCode = " newpath \n 72 72 moveto \n 0 " + std::to_string(_sideLength) + " rlineto \n "
                 + std::to_string(_sideLength) + " 0 rlineto \n 0 " + std::to_string((-1)*(_sideLength)) + " rlineto \n closepath \n";
        return psCode;
    }

private:
    double _height;
    double _width;
    double _sideLength;
};

#endif /* square_h */
