#ifndef CIRCE_HPP
#define CIRCLE_HPP

#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"

class Circle{
    public:
        Circle():
        center_{5, 5}, radius_{2}, color_{0.5, 0.5, 0.5}{}

        Circle(Vec2 const& v1, float radius, Color const& color):
        center_{v1}, radius_{radius}, color_{color}{}

        float circumference();
        void draw(Window const& w, float thickness = 1.0f) const;
        bool is_inside(Vec2 const& v);
        
    private:
        Vec2 center_;
        float radius_;
        Color color_;
};

#endif