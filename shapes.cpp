#include "point.h"
#include "shapes.h"

Rectangle::Rectangle(Point corner, int length, int width) : corner(corner), length(length), width(width) {}

bool Rectangle::constains(const Point & p) const{

	if ((p.getX() >= corner.getX()) && p.getX() <= (corner.getX() + length)
		&& (p.getY() >= corner.getY() && p.getY()) <= (corner.getY() + width))

		return true;

	else

		return false;
}

Rectangle::~Rectangle(){

}
