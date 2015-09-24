/* ----------------------------------------------------------------------------
* Copyright &copy; 2015 Ben Blazak <bblazak@fullerton.edu>
*                  2015 George Calderon <gcald@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

  /**
   * Describes a point in the Euclidean plane.
   */

#include "point.h"

class point{
	private:
		double x, y;
	public:
		point () { x = 0,y = 0;}
		point (double a, double b) : x(a), y(b) {}
		double getX(){
			return x;
		}
		double getY(){
			return y;
		}
};
