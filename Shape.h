//
// Created by kerne on 3/22/2019.
//

#ifndef CPS_SHAPE_H
#define CPS_SHAPE_H


class Shape {
public:
    Shape() = default;
    void setHeight(double height);
    void setWidth(double width);
    double getHeight(){ return _height; }
    double getWidth(){ return _width; }
    virtual ~Shape() = default;
protected:
    double _height = 0;
    double _width = 0;
};


#endif //CPS_SHAPE_H
