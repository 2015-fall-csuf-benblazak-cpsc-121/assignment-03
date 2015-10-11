/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 Matthew Kang <matthesk@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * A class representing a point in a Euclidean plane.
 */

#ifndef POINT_H
#define POINT_H
// ----------------------------------------------------------------------------

class Point {
private:
	double x;
	double y;

public:
	Point(double x = 0, double y = 0);

	double distance(const Point & endpoint) const;

	double getX() const {
		return x;
	}
	double getY() const {
		return y;
	}
};

// ----------------------------------------------------------------------------
#endif  // POINT_H
