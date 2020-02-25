#include <catch.hpp>

#include "sum.h"


TEST_CASE("Test sum function with positive paramaters", "[sum]")
{
    REQUIRE(sum(1.0, 2.0) == 3.0);
    REQUIRE(sum(1.0, 1.0) == 2.0);
}

TEST_CASE("Test sum function with zero parameters", "[sum]")
{
    REQUIRE(sum(0.0, 2.0) == 2.0);
    REQUIRE(sum(0.0, 0.0) == 0.0);
}
