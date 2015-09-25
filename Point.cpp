#include "Point.h"

Point::Point()
{
	xPos = 0.0;
	yPos = 0.0;
}

Point::Point(float x, float y)
{
	xPos = x;
	yPos = y;
}

float Point::Getx() const
{
	return xPos;
}

void Point::Setx(float x)
{
	xPos = x;
}

float Point::Gety() const
{
	return yPos;
}

void Point::Sety(float y)
{
	yPos = y;
}

void Point::printpoint() const
{
	cout << "(" << Getx() << "," << Gety() << ")" << endl;
}
