/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 Matthew Kang <matthesk@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

#include "Shape.h"
#include "Point.h"

#include <iostream>

Rectangle::Rectangle(Point startingPoint, double height, double width) : startingPoint(startingPoint), height(height), width(width) {}


bool Rectangle::contains(const Point & p) const {



	double xRangeStart = startingPoint.getX();
	double xRangeEnd = startingPoint.getX() + width;
	double yRangeStart = startingPoint.getY();
	double yRangeEnd = startingPoint.getY() + height;

	
	if (p.getX() >= xRangeStart &&
	p.getX() <= xRangeEnd &&
	p.getY() >= yRangeStart &&
	p.getY() <= yRangeEnd) {
	return true;
	}
	else {
	return false;
	}
}



Ellipse::Ellipse(Point focus1, Point focus2, double radius) : focus1(focus1), focus2(focus2), radius(radius) {}

bool Ellipse::contains(const Point & p) const {
	return ((p.distance(focus1) + p.distance(focus2)) <= radius);
}




Square::Square(Point start, double l) : Rectangle(start, l, l) {}

Circle::Circle(Point c, double r) : Ellipse(c, c, r) {}




