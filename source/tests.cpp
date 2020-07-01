#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>
#include "vec2.hpp"
#include "mat2.hpp"
#include "color.hpp"
#include "rectangle.hpp"
#include "circle.hpp"

int main(int argc, char *argv[])
{
    std::cout << "tests\n";
  return Catch::Session().run(argc, argv);
}
