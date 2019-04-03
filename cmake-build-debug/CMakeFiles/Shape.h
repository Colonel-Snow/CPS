//
// Created by kerne on 3/22/2019.
//
#include <fstream>
#include <vector>
#include <utility>
#include <functional>
#include <cstdarg>
#include <algorithm>
#include <type_traits>

#ifndef CPS_SHAPE_H
#define CPS_SHAPE_H


class Shape {
public:
    Shape():_filename("CtoPS.ps"), _currentPoint(306,396)
    {}
    void setHeight(double height) {_height = height;}
    void setWidth(double width) {_width = width;}
    void setCenterPoint();
    double getHeight() const {return _height;}
    double getWidth() const {return _width;}
    std::string evaluate() const{return "\n";}
    virtual ~Shape() = default;
private:
    std::string _filename;
    std::pair<double, double> _currentPoint;
    double _height;
    double _width;
};


#endif //CPS_SHAPE_H
