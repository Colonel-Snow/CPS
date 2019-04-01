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

