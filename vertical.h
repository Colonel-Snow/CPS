//
//  vertical.h
//  CPS
//
//  Created by Erin Tolman on 4/1/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//
#ifndef vertical_h
#define vertical_h
class Vertical: public Shape{
public:
    template <typename Arg, typename... Ts,
    typename std::enable_if<std::is_base_of<Shape,Arg>::value>::type * = nullptr>
    explicit Vertical(Arg &i, Ts &... all)
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
        return _height;
    }
    double getWidth(){
        return _width;
    }
    
    std::string generatePostScript(){
        std::string psCode;
        psCode += "0 " + std::to_string(- getHeight() / 2)
        + " translate\n";
        for(auto allShapes : _collectionOfShapes)
        {
            Shape & shapes = allShapes.get();
            psCode += "0 " + std::to_string(shapes.getHeight() / 2) + " "
            + "translate\n";
            psCode += "gsave\n" + shapes.generatePostScript();
            psCode += "grestore\n\n";
            psCode +=  "0 " + std::to_string(shapes.getHeight() / 2)
            + " " + "translate\n" + "\n";
        }
        return psCode;
    }
    
private:
    double _height;
    double _width;
    std::vector<std::reference_wrapper<Shape>> _collectionOfShapes;
};

#endif /* vertical_h */
