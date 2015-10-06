#ifndef POINT_H
#define POINT_H

class Point{
public:
	Point(float X = 0, float Y = 0); //constructor
	float getX() const;
	float getY() const;
	float calc_distance(const Point &a) const;
	~Point(){};
private:
	float X;
	float Y;
};


#endif 
