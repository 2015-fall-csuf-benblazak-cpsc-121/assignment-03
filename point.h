#ifndef POINT_H
#define POINT_H

class Point{

private:

	float x;
	float y;

public:

	Point(const float x = 0, const float y = 0);

	float getX() const;

	float getY() const;

};

#endif  // POINT_H
