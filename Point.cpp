#include "Point.h"
#include <cmath>

 /* ----------------------------------------------------------------------------
   * Copyright &copy; 2015 Randy Tanizawa <rtanizawa@csu.fullerton.edu>
   * Released under the [MIT License] (http://opensource.org/licenses/MIT)
   * ------------------------------------------------------------------------- */

  /**
   * Method prototypes for class Point.
   */

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(double X, double Y)
{
    x = X;
    y = Y;
}

double Point::getPoint_x() const
{
    return x;
}


double Point::getPoint_y() const
{
    return y;
}

double Point::distance(const Point & a) const
{
    return sqrt(pow(a.x - this->x, 2) + pow(a.y - this->y, 2));
}

Point::~Point()
{
}
