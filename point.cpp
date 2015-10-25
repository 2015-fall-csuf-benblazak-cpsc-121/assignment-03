#include <cmath>
using std::pow;
using std::sqrt;

#include "point.h"

Point::Point(double x, double y) : x(x), y(y) {}

double Point::distance(const Point & a) const
{
	return sqrt( pow(a.x - this->x, 2) + pow( a.y - this->y, 2));
}