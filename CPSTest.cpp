//
//  CPSTest.cpp
//  CPS
//
//  Created by Erin Tolman on 3/31/19.
//  Copyright © 2019 Erin Tolman. All rights reserved.
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Shape.h"
#include "circle.h"
#include "rectangle.h"
#include "spacer.h"
#include "square.h"
#include "triangle.h"

TEST_CASE("Test default shape height and width"){
    Shape testShape;
    REQUIRE(testShape.getHeight() == 0);
    REQUIRE(testShape.getWidth() == 0);
}

TEST_CASE("Test circle height and width"){
    SECTION("Default circle - radius of 0"){
        Circle testCircle(0);
        REQUIRE(testCircle.getHeight() == 0);
        REQUIRE(testCircle.getWidth() == 0);
    }
    SECTION("Circle with radius of size 5"){
        Circle testCircle(5);
        REQUIRE(testCircle.getHeight() == 10);
        REQUIRE(testCircle.getWidth() == 10);
    }
    SECTION("Circle with radius of size 100"){
        Circle testCircle(100);
        REQUIRE(testCircle.getHeight() == 200);
        REQUIRE(testCircle.getWidth() == 200);
    }
}


TEST_CASE("Test rectangle height and width"){
    SECTION("Default rectangle"){
        Rectangle testRectangle(0, 0);
        REQUIRE(testRectangle.getHeight() == 0);
        REQUIRE(testRectangle.getWidth() == 0);
    }
    SECTION("Rectangle with width of 5 and height of 5"){
        Rectangle testRectangle(5, 5);
        REQUIRE(testRectangle.getHeight() == 5);
        REQUIRE(testRectangle.getWidth() == 5);
    }
    SECTION("Rectangle with width of 10 and height of 20"){
        Rectangle testRectangle(10, 20);
        REQUIRE(testRectangle.getHeight() == 20);
        REQUIRE(testRectangle.getWidth() == 10);
    }

}



TEST_CASE("Test spacer height and width"){
    SECTION("Default spacer"){
        Spacer testSpacer(0, 0);
        REQUIRE(testSpacer.getHeight() == 0);
        REQUIRE(testSpacer.getWidth() == 0);
    }
    SECTION("Spacer with width of 5 and height of 5"){
        Spacer testSpacer(5, 5);
        REQUIRE(testSpacer.getHeight() == 5);
        REQUIRE(testSpacer.getWidth() == 5);
    }
    SECTION("Spacer with width of 10 and height of 20"){
        Spacer testSpacer(10, 20);
        REQUIRE(testSpacer.getHeight() == 20);
        REQUIRE(testSpacer.getWidth() == 10);
    }
}


TEST_CASE("Test square height and width"){
    SECTION("Default square"){
        Square testSquare(0);
        REQUIRE(testSquare.getHeight() == 0);
        REQUIRE(testSquare.getWidth() == 0);
    }
    SECTION("Square with side lenght of 5"){
        Square testSquare(5);
        REQUIRE(testSquare.getHeight() == 5);
        REQUIRE(testSquare.getWidth() == 5);
    }
    SECTION("Square with side lenght of 10"){
        Square testSquare(10);
        REQUIRE(testSquare.getHeight() == 10);
        REQUIRE(testSquare.getWidth() == 10);
    }
}


TEST_CASE("Test triangle height and width"){
    SECTION("Default triangle"){
        Triangle testTriangle(0);
        REQUIRE(testTriangle.getHeight() == 0);
        REQUIRE(testTriangle.getWidth() == 0);
    }
    SECTION("Triangle with side lenght of sqrt(3)"){
        Triangle testTriangle(sqrt(3));
        REQUIRE(testTriangle.getHeight() == 1.5);
        REQUIRE(testTriangle.getWidth() == sqrt(3));
    }
    SECTION("Triangle with side lenght of 10"){
        Triangle testTriangle(10);
        REQUIRE(testTriangle.getHeight() == );
        REQUIRE(testTriangle.getWidth() == 10);
    }
}


