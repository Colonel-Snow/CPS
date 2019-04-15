//
//  triangle.h
//  CPS
//
//  Created by Erin Tolman on 3/25/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//

#ifndef triangle_h
#define triangle_h

class Triangle: public Polygon{
public:
    explicit Triangle(double sideLength):Polygon(3, sideLength)
    {}
    
    void setHeight(double sideLength){
        _height = sideLength*sqrt(3)/2;
    }
    void setWidth(double sideLength){
        _width = sideLength;
    }
    double getHeight(){
        setHeight(_sideLength);
        return _height;
    }
    double getWidth(){
        setWidth(_sideLength);
        return _width;
    }
    std::string generatePostScript(){
        std::string psCode = " newpath \n 72 72 moveto \n" + std::to_string(_sideLength) + " 0 rlineto \n"
                 + std::to_string(72/2) + " " + std::to_string(_sideLength*sqrt(3)/2) + " rlineto \n closepath \n";
        return psCode;
    }
    
private:
    double _height;
    double _width;
    double _sideLength;
};

#endif /* triangle_h */
