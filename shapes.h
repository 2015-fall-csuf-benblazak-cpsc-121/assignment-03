/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 Ben Blazak <bblazak@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * Classes representing shapes in a Euclidean plane.
 */

#ifndef SHAPE_H
#define SHAPE_H
#include "Point.h"

class Shape {
public:
	virtual bool contains(const Point & p) const = 0;
	virtual ~Shape() {}
};



class Rectangle : public Shape {
private:
	Point startingPoint;
	double height;
	double width;

public:
	Rectangle(Point startingPoint = Point(), double height = 0, double width = 0);
	//Rectangle();

	bool contains(const Point & p) const;
};

class Ellipse : public Shape {
private:
	Point focus1;
	Point focus2;
	double radius;

public:
	Ellipse(Point focus1 = Point(), Point focus2 = Point(), double radius = 0);

	bool contains(const Point & p) const;

};


class Square : public Rectangle {
public:
	Square(Point startingPoint, double sideLength);
};


class Circle : public Ellipse {
public:
	Circle(Point center, double radius);
};


#endif
