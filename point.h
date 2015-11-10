#ifndef POINT_H
#define POINT_H
//contains all the function prototypes

class point {
private:
	float x;
	float y;

public:
	point(float x = 0, float y = 0);//constructor with argument parameters
	float getX() const {
		return x;
	}
	float getY() const {
		return y;
	}

	float distance(const point & a) const;
};
#endif
