//
//  spiral.h
//  
//
//  Created by Erin Tolman on 4/3/19.
//

#ifndef spiral_h
#define spiral_h
class Spiral: public Shape{
public:
    Spiral(double radius):_radius{}
    std::string evaluate(){
        std::string psCode = "300 300 translate \n" + "0 0 moveto \n"
        + "0 .1 " + std::to_string(_radius) + " { dup 0 moveto .1 sub 0 lineto stroke 1 rotate } for \n" + "showpage \n";
    };
private:
    double _radius;
}

#endif /* spiral_h */
