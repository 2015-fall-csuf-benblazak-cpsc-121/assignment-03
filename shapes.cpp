/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 James Mabe <jamespmabe@gmail.com>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * This code accesses the functions inside of the classes. in shapes.h
 */
#include <cmath>
#include "shapes.h"
using std::abs;

Rectangle::Rectangle(Point center, float Rx, float Ry)
    : center(center), Rx(Rx), Ry(Ry) {}

bool Rectangle::contains(const Point &p) const {
    return (abs( p.getX() - center.getX() ) <= Rx && abs( p.getY() - center.getY()) <= Ry);
}

Square::Square(Point center, float side) : Rectangle(center, side/2, side/2) {}

Ellipse::Ellipse(Point f1, Point f2, float radius)
    : f1(f1), f2(f2), radius(radius) {}

bool Ellipse::contains(const Point & p) const {
    return p.distance(f1) + p.distance(f2) <= radius;
}

Circle::Circle(Point center, float radius)
    : Ellipse(center, center, radius){}

