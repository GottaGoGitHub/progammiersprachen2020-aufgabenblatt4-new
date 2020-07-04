#include "vec2.hpp"
#include "circle.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>


int main() {
    Vec2 center1{ 250, 300 };
    Vec2 center2{ 450, 75 };
    Vec2 center3{ 50, 470 };

    Color color1{ 1.0, 0.0, 0.0 };
    Color color2{ 0.0, 1.0, 0.0 };
    Color color3{ 0.0, 0.0, 1.0 };

    Circle circle1{ center1, 100, color1 };
    Circle circle2{ center2, 200, color2 };
    Circle circle3{ center3, 50, color3 };

    std::list<Circle> sorted_circles;
    sorted_circles.push_back(circle1);
    sorted_circles.push_back(circle2);
    sorted_circles.push_back(circle3);
    auto sorting_lambda = [](Circle const& lhs, Circle const& rhs)->bool {
        return(lhs.circumference() < rhs.circumference());
    };

    sorted_circles.sort(sorting_lambda);

    
    if(std::is_sorted(sorted_circles.begin(), sorted_circles.end()) == true) {
        std::cout << "Vector is sorted via lambda\n";
    }
    else {
        std::cout << "Vector is not sorted\n";
    }

    return 0;
}
