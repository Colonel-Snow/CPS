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
    
    void setHeight(double height){
        _height = height;
    }
    void setWidth(double width){
        _width = width;
    }
    
    double getHeight() const{
        return _height;
    }
    double getWidth() const{
        return _width;
    }
    
private:
    double _height;
    double _width;
    const Shape & _shape;
    int _rotationAngle;
};

#endif /* rotated_h */
