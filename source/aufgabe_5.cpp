#include "vec2.hpp"
#include "circle.hpp"
#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    Vec2 center1{ 250, 300 };
    Vec2 center2{ 450, 75 };
    Vec2 center3{ 50, 470 };

    Color color1{ 1.0, 0.0, 0.0 };
    Color color2{ 0.0, 1.0, 0.0 };
    Color color3{ 0.0, 0.0, 1.0 };

    Circle circle1{ center1, 100, color1 };
    Circle circle2{ center2, 200, color2 };
    Circle circle3{ center3, 50, color3 };

    std::vector<Circle> sorted_circles{ circle1, circle2, circle3 };
    std::sort(sorted_circles.begin(), sorted_circles.end());

    if (std::is_sorted(sorted_circles.begin(), sorted_circles.end()) == true){
        std::cout << "vector is sorted\n";
    }
    else {
        std::cout << "not sorted\n";
    }

    return 0;
}