#ifndef POINT_H
#define POINT_H
#endif

class Point
{
	private: 
		double x, y;
	public: 
		Point()
	{
		x=0;y=0;
	}

	double getX() const { return x;}
	double getY() const { return y;}

	double distance(const Point & a) const;


};