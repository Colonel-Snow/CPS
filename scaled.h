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
        setHeight(_shape.getHeight() * scaleFactor_Y);
        setWidth(_shape.getWidth() * scaleFactor_X);
    }
    
    void setHeight(double height){
        _height = height;
    }
    void setWidth(double width){
        _width = width;
    }
    double getHeight(){
        return _height;
    }
    double getWidth(){
        return _width;
    }
    
    std::string generatePostScript(){
        std::string psCode = "gsave\n" + std::to_string(_scaleFactor_X) + " "
        + std::to_string(_scaleFactor_Y) + " scale\n"
        + _shape.generatePostScript() + "grestore\n";
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
