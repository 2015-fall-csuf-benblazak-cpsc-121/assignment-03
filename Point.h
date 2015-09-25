#ifndef POINT_H
#define POINT_H

 /* ----------------------------------------------------------------------------
   * Copyright &copy; 2015 Randy Tanizawa <rtanizawa@csu.fullerton.edu>
   * Released under the [MIT License] (http://opensource.org/licenses/MIT)
   * ------------------------------------------------------------------------- */

  /**
   * Describing a class called Point.
   */

class Point
{
    private:
        double x;
        double y;
    public:
        Point();
        Point(double X, double Y);
        double getPoint_x() const;
        double getPoint_y() const;
        double distance(const Point& a) const;
        void move_P(double X, double Y){ x = X; y = Y;};
        ~Point();

};

#endif 
