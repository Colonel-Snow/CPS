//
// Created by kerne on 3/22/2019.
//
#include <fstream>
#include <vector>
#include <utility>
#include <functional>
#include <cstdarg>
#include <algorithm>
using std::max;
#include <type_traits>
#include <string>
#include <cmath>

#ifndef CPS_SHAPE_H
#define CPS_SHAPE_H


class Shape {
public:
    Shape():_filename("CtoPS.txt"), _centerPoint(306, 396),
            _height(72), _width(72){};
    
    void setHeight(double height) {_height = height;}
    void setWidth(double width) {_width = width;}
    void setCenterPoint(double x, double y) {_centerPoint = std::make_pair(x,y);}
    
    double getHeight() const {return _height;}
    double getWidth() const {return _width;}
    std::pair<double, double> getCenterPoint() const {return _centerPoint;}
    
    virtual std::string generatePostScript() {return "\n";}
    virtual ~Shape() = default;
    
private:
    std::string _filename;
    std::pair<double, double> _centerPoint;
    double _height;
    double _width;
};


#endif //CPS_SHAPE_H
