#ifndef SHAPES_H
#define SHAPES_H
#endif

class Shape
{
	public:
	virtual bool contains(const Point & p) const = 0;	
	virtual ~Shape() {};
};