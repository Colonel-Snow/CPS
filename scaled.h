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
    Scaled(Shape shape, double scaleFactor_X, double scaleFactor_Y):_shape(shape)
    {
        //_shape.setHeight(shape.getHeight() * scaleFactor_Y);
        //_shape.setWidth(shape.getWidth() * scaleFactor_X);
    }
private:
    double _height;
    double _width;
    const Shape & _shape;
    double _scaleFactor_X;
    double _scaleFactor_Y;
};

#endif /* scaled_h */
