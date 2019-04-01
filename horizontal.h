//
//  horizontal.h
//  CPS
//
//  Created by Erin Tolman on 4/1/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//

#ifndef horizontal_h
#define horizontal_h
class Horizontal: Public Shape{
public:
    template <typename Arg, typename... Ts,
    typename enable_if<is_base_of<Shape,Arg>::value>::type * = nullptr>
    Horizontal(Arg &i, Ts &... all)
    {
        _collectionOfShapes = {i, all... };
        double height = 0;
        double width = 0;
        for(allShapes : _collectionOfShapes){
            const Shape & shapes = allShapes.getWidth();
            height = max(shapes, allShapes.getHeight());
            width += allShapes.getWidth();
        }
    }
    
private:
    double _height;
    double _width;
    std::vector<reference_wrapper<const Shape>> _collectionOfShapes;
};

#endif /* horizontal_h */
