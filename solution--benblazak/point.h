/* ----------------------------------------------------------------------------
* Copyright &copy; 2015 Ben Blazak <bblazak@fullerton.edu>
*                       Gabriel Martinez <1212gmartinz@su.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A class that represents points in the euclidian plane.
*
*/

#ifndef POINT_H
#define POINT_H

// ----------------------------------------------------------------------------

class Point {
private:
	float x;
	float y;

public:
	Point(float x = 0, float y = 0);

	float getX() const;
	float getY() const;

	float distance(const Point & a) const;
};

// ----------------------------------------------------------------------------

#endif POINT_H
