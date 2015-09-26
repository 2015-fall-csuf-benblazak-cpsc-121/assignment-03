#include "shapes.h"

class Rectangle: public shapes {
	public: bool contains(const Point& p) const;
	~Rectangle() {}; };

class Ellipse: public shapes {
	public: bool contains(const Point& p) const;
	~Ellipse() {}; };

class Square: public Rectangle
{
	public: bool contains(const Point& p) const;
	~Square() {};
};

class Circle: public Ellipse
{
	public: bool contains(const point& p) const;
	~Circle() {};
};
