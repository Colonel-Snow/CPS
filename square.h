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
    std::ofstream evaluate(){
        Polygon sq(3, _sideLength);
        return sq.evaluate();
    }

private:
    double _height;
    double _width;
    double _sideLength;
};

#endif /* square_h */
