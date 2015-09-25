#ifndef POINT_H
#define POINT_H

class Point{

public:
	//Default constructor to initiate (x,y) = (0,0)
	Point(){ x = 0; y = 0; }

	//This function to get points from shape
	void get_point(float, float);


private:
	float x;
	float y;
};

#endif 
