//
//  scaled.h
//  CPS
//
//  Created by Erin Tolman on 4/1/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//

#ifndef scaled_h
#define scaled_h
class Scaled: public Shape{
public:
    Scaled(Shape shape, double scaleFactor_X, double scaleFactor_Y):_shape(shape), _scaleFactor_X(scaleFactor_X), _scaleFactor_Y(scaleFactor_Y)
    {
        setHeight(shape.getHeight() * scaleFactor_Y);
        setWidth(shape.getWidth() * scaleFactor_X);
    }
    void setHeight(double height){
        _height = height;
    }
    void setWidth(double width){
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
    std::string evaluate(){
        std::string psCode = std::to_string(_scaleFactor_X) + " "
        + std::to_string(_scaleFactor_Y) + " scale\n"
        + _shape.evaluate();
        return psCode;
    }
private:
    double _height;
    double _width;
    const Shape & _shape;
    double _scaleFactor_X;
    double _scaleFactor_Y;
};

#endif /* scaled_h */
