/* ----------------------------------------------------------------------------
* Copyright &copy; 2015 Ben Blazak <bblazak@fullerton.edu>
*                  2015 George Calderon <gcald@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

  /**
   * A short program to print "Hello World!" to standard output.
   */

//Describes a point in the Euclidean plane.

//Note: This means that the x and y values need to be either float or double.

//Must be able to be initialized with no arguments, defaulting to the point (0,0).

//Note: This is the same as saying that it must have a default constructor. If a constructor has default values for all arguments, it fulfills this requirement and is considered a default constructor.

//Must be able to be initialized with an x and y value.

//Must not be possible to change the x or y value once it has been constructed.

//Note: This means that the member variables containing the x and y values must be private (or protected), and you must implement getters (but not setters) for each.

class point{
	private:
		double x, y;
};

point::point() : x(0) {}