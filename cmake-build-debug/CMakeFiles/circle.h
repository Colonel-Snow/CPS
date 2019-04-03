//
//  circle.h
//  CPS
//
//  Created by Erin Tolman on 3/25/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//

#ifndef circle_h
#define circle_h
#include <string>
class Circle: public Shape{
public:
    Circle(double radius):_radius(radius)
    {
        _height = getHeight();
        _width = getWidth();
    }

    void setHeight(double radius){
        _height = 2*radius;
    }
    void setWidth(double radius){
        _width = 2*radius;
    }

    double getHeight()
    {
        setHeight(_radius);
        return _height;
    }
    double getWidth(){
        setWidth(_radius);
        return _width;
    }

    std::string evaluate(){
        std::string psCode;
        psCode = " newpath \n 180 252 " + std::to_string(_radius) + " 0 360 arc \n closepath \n stoke \n";
        return psCode;
    }
    
private:
    std::string _filename;
    double _radius;
    double _width;
    double _height;
};

#endif /* circle_h */
