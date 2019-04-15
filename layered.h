//
//  layered.h
//  CPS
//
//  Created by Erin Tolman on 4/1/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//

#ifndef layered_h
#define layered_h
class Layered: public Shape{
public:
    template <typename Arg, typename... Ts,
              typename std::enable_if<std::is_base_of<Shape,Arg>::value>::type * = nullptr>
    explicit Layered(Arg &i, Ts &... all)
    {
        _collectionOfShapes = {i, all... };
        double height = 0;
        double width = 0;
        for(auto allShapes : _collectionOfShapes){
            const Shape & shapes = allShapes.get();
            width = max(width, shapes.getWidth());
            height = max(height, shapes.getHeight());
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
        for(auto allShapes : _collectionOfShapes){
            const Shape & shapes = allShapes.get();
            psCode += "gsave\n" + shapes.generatePostScript();
            psCode += " grestore\n\n";
        }
        return psCode;
    }
    
private:
    double _height;
    double _width;
    std::vector<std::reference_wrapper<const Shape>> _collectionOfShapes;
};

#endif /* layered_h */
