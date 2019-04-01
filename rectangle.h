//
//  rectangle.h
//  CPS
//
//  Created by Erin Tolman on 3/25/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//

#ifndef rectangle_h
#define rectangle_h
#include string

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
    std::string evaluate(int &w, int &h){
        auto len = h;
        auto width = w;

        std::string psCode = "new path \n 72 72 moveto \n 0 " + len + " rlineto \n" + width + " 0 rlineto \n 0 " + (-1)*len " rlineto \n closepath \n stroke \n showpage \n";
        return psCode;
    }


private:
    double _width;
    double _height;
};

#endif /* rectangle_h */
