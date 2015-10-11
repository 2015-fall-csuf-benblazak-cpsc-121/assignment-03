/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 Matthew Kang <matthesk@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

#include "Point.h"
#include <cmath>

Point::Point(double xValue, double yValue) {
	x = xValue;
	y = yValue;
}



double Point::distance(const Point & endpoint) const {
	double result;
	double x1 = x;
	double y1 = y;

	double x2 = endpoint.getX();
	double y2 = endpoint.getY();

	result = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	return result;


}
