//
//  layered.h
//  CPS
//
//  Created by Erin Tolman on 4/1/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//

#ifndef layered_h
#define layered_h
class Layered: Public Shape{
public:
    template <typename Arg, typename... Ts,
    typename enable_if<is_base_of<Shape,Arg>::value>::type * = nullptr>
    Layered(Arg &i, Ts &... all)
    {
        _collectionOfShapes = {i, all... };
        
    }
    
private:
    double _height;
    double _width;
    std::vector<reference_wrapper<const Shape>> _collectionOfShapes;
};

#endif /* layered_h */
