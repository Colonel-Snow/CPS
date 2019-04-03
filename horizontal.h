//
//  horizontal.h
//  CPS
//
//  Created by Erin Tolman on 4/1/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//
#include <algorithm>
using std::max;
#ifndef horizontal_h
#define horizontal_h
class Horizontal: public Shape{
public:
    template <typename Arg, typename... Ts,
    typename std::enable_if<std::is_base_of<Shape,Arg>::value>::type * = nullptr>
    Horizontal(Arg &i, Ts &... all)
    {
        _collectionOfShapes = {i, all... };
        double height = 0;
        double width = 0;
        for (auto allShapes : _collectionOfShapes)
        {
            const Shape & shapes = allShapes.get();
            height = max(height, shapes.getHeight());
            width += shapes.getWidth();
        }
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
            psCode +=  std::to_string(shapes.getWidth()) + " "
            + std::to_string((shapes.getHeight() - shapes.getHeight()) / 2) + " "
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

#endif /* horizontal_h */
