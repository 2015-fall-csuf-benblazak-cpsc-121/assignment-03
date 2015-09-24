/* ----------------------------------------------------------------------------
* Copyright &copy; 2015 Ben Blazak <bblazak@fullerton.edu>
*                  2015 George Calderon <gcald@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

  /**
   * A short program to print "Hello World!" to standard output.
   */
#include "point.h"

class Shape{
	virtual bool contains(const Point & p) const = 0;
};

class Rectangle: public Shape{};

class Ellipse: public Shape{};

class Square: public Rectangle{};

class Circle: public Ellipse{};
























#include "shapes.h"
#include "point.h"

class Shape{
	virtual bool contains(const Point & p) const = 0;
};