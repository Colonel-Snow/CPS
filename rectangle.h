//
//  rectangle.h
//  CPS
//
//  Created by Erin Tolman on 3/25/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//

#ifndef rectangle_h
#define rectangle_h
class Rectangle: public Shape{
public:
    Rectangle(double width, double height):_width(width),_height(height)
    {}
    void setHeight(double height){
        _height = height;
    }
    void setWidth(width){
        _width = width;
    }
    double getHeight(){
        setHeight(_height);
        return _height;
    }
    double getWidth(){
        setWidth(_width);
        return _width;
    }
private:
    double _width;
    double _height;
};

#endif /* rectangle_h */
