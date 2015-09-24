/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 James Mabe <jamespmabe@gmail.com>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * This file contains all the subclasses of class Shape.
 */

#include "shapes.h"

class Rectangle : public Shape{
public:
    bool contains(const Point & p) const;
    ~Rectangle() {}
};

class Ellipse : public Shape{
public:
    bool contains(const Point & p) const;
    ~Ellipse() {}
};

class Square : public Rectangle{
public:
    bool contains(const Point & p) const;
    ~Square() {}
};

class Circle : public Ellipse{
public:
    bool contains(const Point & p) const;
    ~Circle() {}
};
