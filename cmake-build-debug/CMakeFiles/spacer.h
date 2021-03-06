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
    
   
    std::string generatePostScript() {
        std::string psCode;
        psCode = " newpath \n 72 72 moveto \n 0 " + std::to_string(this->_height) + " rlineto \n" + std::to_string(this->_width)
                + " 0 rlineto \n 0 " + std::to_string((-1)*this->_height) + " rlineto \n closepath \n";
            return psCode;
    }

private:
    double _width;
    double _height;
};

#endif /* spacer_h */
