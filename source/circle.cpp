#define _USE_MATH_DEFINES
#include "circle.hpp"
#include <cmath>

float Circle::circumference(){
    float result = 2 * M_PI * radius_;
    return result;
}

void Circle::draw(Window const& w, float thickness) const{
    for(int i = 0; i < 360; ++i){
        float g1 = i * M_PI / 180.0;
        float g2 = (i + 1) * M_PI / 180.0;

        w.draw_line(center_.x + (radius_ * std::sin(g1)), center_.y + (radius_* std::cos(g1)), center_.x + (radius_ * std::sin(g2)), center_.y + (radius_ * std::cos(g2)), color_.r, color_.g, color_.b, thickness);
    }
    return;
}

bool Circle::is_inside(Vec2 const& v){
    float distance_to_center = sqrt(pow((v.x - center_.x), 2) + pow((v.y - center_.y), 2));
    if(distance_to_center < radius_){
        return true;
    }
    return false;
}