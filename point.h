/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 James Mabe <jamespmabe@gmail.com>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * References: Class function given by Mr. Blazak
 * ------------------------------------------------------------------------- */

/**
 * This header file contains class point that is used in point.cpp
 */

#ifndef POINT_H
#define POINT_H

class Point {
private:
    float x, y;
public:
    Point(float x = 0, float y = 0);
    
    float getX() const {return x;}
    float getY() const {return y;}
    
    float distance(const Point & a) const;
};

#endif // POINT_H
