#include "point.h"

class Shape{

private:
	
public:

	virtual bool constains(const Point & p) const = 0;
	virtual ~Shape();

};

class Rectangle : public Shape{
private:
	Point corner;
	int length;
	int width;
public:

	Rectangle(Point corner = Point(0, 0), int length = 0, int width = 0);
	bool constains(const Point & p) const;
	~Rectangle();
};

class Ellipse : public Shape{

};

class Square : public Rectangle{

};

class Circle : public Ellipse{

};
