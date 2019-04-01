//
//  rectangle.h
//  CPS
//
//  Created by Erin Tolman on 3/25/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//

#ifndef rectangle_h
#define rectangle_h
#include iostream
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
    string evaluate(int &w, int &h){
        auto len = h;
        auto width = w;

        std::cout << "new path \n " << width << " " << len << " moveto \n" <<

    }


private:
    double _width;
    double _height;
};

#endif /* rectangle_h */
