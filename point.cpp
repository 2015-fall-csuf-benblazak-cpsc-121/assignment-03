#include <iostream>
#include "point.h"
#include <cmath>
using std::pow;
using std::sqrt;
//contains all the functions whose prototype are defined in header file.

// -------------------------------------------------------------------
points::points(float x, float y) :x(x), y(y) {}

float points::distance(const points & a) const {//

	return sqrt(pow(a.x - this->x, 2) + pow(a.y - this->y, 2));

}
