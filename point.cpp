/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 James Mabe <jamespmabe@gmail.com>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * References: Given by Mr. Blazak
 * ------------------------------------------------------------------------- */

#include <cmath>
#include "point.h"
using std::pow;
using std::sqrt;


Point::Point(float x, float y) : x(x), y(y) {}

float Point::getX() const {return x;}
float Point::getY() const {return y;}

float Point::distance(const Point & a) const{
    return sqrt( pow(a.x - this ->x, 2) + pow(a.y - this->y, 2));
}
