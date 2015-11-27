/* ----------------------------------------------------------------------------
* Copyright &copy; 2015 Ben Blazak <bblazak@fullerton.edu>
*                  2015 George Calderon <gcald@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

  /**
   * Includes class Point to be refrenced between .cpps.
   */
#ifndef POINT_H
#define POINT_H
  // ----------------------------------------------------------------------------
#include <iostream>
using std::cout;
using std::endl;

class Point{
	private:
		double x, y;
	public:
		Point () { x = 0,y = 0;}
		Point (double a, double b) : x(a), y(b) {}
		bool contains(const Point & p) const{
			false;
		};
		double getX(){
			return x;
		}
		double getY(){
			return y;
		}
};
  // ----------------------------------------------------------------------------

#endif  // POINT_H