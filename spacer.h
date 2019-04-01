//
//  spacer.h
//  CPS
//
//  Created by Erin Tolman on 3/25/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//

#ifndef spacer_h
#define spacer_h

class Spacer: public Shape{
public:
    Spacer(double width, double height):_width(width),_height(height)
    {}
    
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
    std::ofstream evaluate() {
        std::ofstream psCode;
        psCode << "new path \n 72 72 moveto \n 0 " << this->_height << " rlineto \n" << this->_width <<" 0 rlineto \n 0 " << (-1)*this->_height << " rlineto \n closepath \n stroke \n showpage \n";
            return psCode;
    }

private:
    double _width;
    double _height;
};

#endif /* spacer_h */
