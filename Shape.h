//
// Created by kerne on 3/22/2019.
//
#include <sstream>
using std::stringstream;

#ifndef CPS_SHAPE_H
#define CPS_SHAPE_H


class Shape {
public:
    Shape():_filename("CtoPS.ps"), _currentPoint(306,396), _height(72), _width(72)
    {}
    void setHeight(double height){_height = height;}
    void setWidth(double width){_width = width;}
    void setCenterPoint();
    double getHeight() const {return _height;}
    double getWidth() const {return _width;}
    virtual ~Shape() = default;
protected:
    std::ofstream _file;
private:
    std::string _filename;
    std::pair<double, double> _currentPoint;
    double _height;
    double _width;
};


#endif //CPS_SHAPE_H
