//
//  circle.h
//  CPS
//
//  Created by Erin Tolman on 3/25/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//
#ifndef circle_h
#define circle_h
class Circle: public Shape{
public:
    explicit Circle(double radius):_radius(radius)
    {
        setHeight(radius);
        setWidth(radius);
    }

    void setHeight(double radius){
        _height = 2*radius;
    }
    void setWidth(double radius){
        _width = 2*radius;
    }

    double getHeight() const
    {
        return _height;
    }
    double getWidth() const
    {
        return _width;
    }

    std::string generatePostScript(){
        std::string psCode;
        psCode = " newpath \n 180 252 " + std::to_string(_radius) + " 0 360 arc \n closepath \n";
        return psCode;
    }
    
private:
    std::string _filename;
    double _radius;
    double _width;
    double _height;
};

#endif /* circle_h */
