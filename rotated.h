//
//  rotated.h
//  CPS
//
//  Created by Erin Tolman on 4/1/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//
#ifndef rotated_h
#define rotated_h
class Rotated: public Shape{
public:
    Rotated(Shape & shape, int rotationAngle):_shape(shape), _rotationAngle(rotationAngle)
    {
        if(rotationAngle == 0 || rotationAngle == 180 || rotationAngle == 360)
        {
            setWidth(_shape.getWidth());
            setHeight(_shape.getHeight());
        }
        else
        {
            setWidth(_shape.getHeight());
            setHeight(_shape.getWidth());
        }
    }
    
    std::string generatePostScript(){
        std::string psCode = std::to_string(_rotationAngle) + " rotate\n" + _shape.generatePostScript() + std::to_string(- _rotationAngle) + " rotate\n";
        return psCode;
    }
private:
    double _height;
    double _width;
    Shape & _shape;
    int _rotationAngle;
};

#endif /* rotated_h */
