#ifndef SHAPE_H
#define SHAPE_H

class Shapes{
public:
	virtual bool contains(const Point &p) const = 0;
	virtual ~Shapes(){}
};

class Ellipse : public Shapes{
public:
	Ellipse(Point F1 = 0, Point F2 = 0, float dis_focal_to_edge = 0);
	bool contains(const Point &p) const;
private:
	Point F1;
	Point F2;
	float dis_focal_to_edge;
};

class Circle : public Ellipse{
public:
	Circle(Point center = 0, float radius = 0);
 
};

#endif 
