#include <catch.hpp>

#include "mul.h"


TEST_CASE("Test mul function with positive paramaters", "[mul]")
{
    REQUIRE(mul(1.0, 2.0) == 2.0);
    REQUIRE(mul(1.0, 1.0) == 1.0);
}

TEST_CASE("Test mul function with zero parameters", "[mul]")
{
    REQUIRE(mul(0.0, 2.0) == 0.0);
    REQUIRE(mul(0.0, 0.0) == 0.0);
}
