//
//  square.h
//  CPS
//
//  Created by Erin Tolman on 3/25/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//

#ifndef square_h
#define square_h
class Square: public Shape{
public:
    Square(double sideLength):_sidelength(sideLength)
    {}
    
    void setHeight(double height){
        _height = height;
    }
    void setWidth(width){
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
private:
    double _height;
    double _width;
    double _sideLength;
};

#endif /* square_h */
