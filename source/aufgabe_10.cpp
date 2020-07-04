#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>
#include <algorithm>

bool is_multiple_of_3(int i) {
    return (i % 3 == 0);
}

TEST_CASE("filter alle vielfache von drei", "[erase]") {
    std::vector<unsigned int> vector(100);

    for (auto& index : vector) {
        index = rand() % 100;
    }

    vector.erase(std::remove_if(vector.begin(), vector.end(), [](int x) {return x % 3; }), vector.end());

    std::copy(std::cbegin(vector), std::cend(vector), std::ostream_iterator<int>(std::cout, ", "));

    REQUIRE(std::all_of(vector.begin(), vector.end(), is_multiple_of_3));
}

int main(int argc, char* argv[]) {
    return Catch::Session().run(argc, argv);
}