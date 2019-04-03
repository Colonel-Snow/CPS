//
//  vertical.h
//  CPS
//
//  Created by Erin Tolman on 4/1/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//
#include <algorithm>
using std::max;
#ifndef vertical_h
#define vertical_h
class Vertical: public Shape{
public:
    template <typename Arg, typename... Ts,
    typename std::enable_if<std::is_base_of<Shape,Arg>::value>::type * = nullptr>
    Vertical(Arg &i, Ts &... all)
    {
        _collectionOfShapes = {i, all... };
        double height = 0;
        double width = 0;
        for (auto allShapes : _collectionOfShapes)
        {
            const Shape & shapes = allShapes.get();
            width = max(width, shapes.getWidth());
            height += shapes.getHeight();
        }
        setWidth(width);
        setHeight(height);
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
        std::string psCode = "";
        for(auto allShapes : _collectionOfShapes){
            const Shape & shapes = allShapes.get();
            psCode += std::to_string(shapes.getWidth() / 2) + " "
            + std::to_string(shapes.getHeight() / 2) + " "
            + "rmoveto\n";
            psCode += shapes.evaluate() += "\n";
            psCode +=  std::to_string((shapes.getWidth() - getWidth()) / 2) + " "
            + std::to_string(shapes.getHeight()) + " "
            + "rmoveto\n"
            + "\n";
        }
        return psCode;
    }
    
private:
    double _height;
    double _width;
    std::vector<std::reference_wrapper<const Shape>> _collectionOfShapes;
};

#endif /* vertical_h */
