#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"

class Rectangle{
    public:
        Rectangle():
        min_{0, 0}, max_{5, 5}, color_{0.5, 0.5, 0.5}{}

        Rectangle(Vec2 const& v1, Vec2 const& v2, Color const& color):
        min_{v1}, max_{v1.x + v2.x, v1.y + v2.y}, color_{color}{}

        float circumference();
        void draw(Window const& w, float f = 1.0f) const;
        bool is_inside(Vec2 const& v);

    private:
        Vec2 min_, max_;
        Color color_;
};

#endif