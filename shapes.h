/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 James Mabe <jamespmabe@gmail.com>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * This header file contains the classes of the shapes
 */

#ifndef SHAPES_H
#define SHAPES_H

#include "point.h"

class Shape{
public:
    virtual bool contains(const Point & p) const = 0;
    virtual ~Shape() {}
    
};

class Rectangle : public Shape {
private:
    Point center;
    float Rx;
    float Ry;
    
public:
    Rectangle(Point center = Point(), float Rx = 0, float Ry = 0);
    
    bool contains(const Point & p) const;
};

class Ellipse : public Shape{
private:
    Point f1;
    Point f2;
    float radius;
    
public:
    Ellipse(Point f1 = Point(), Point f2 = Point(), float radius = 0);
    
    bool contains (const Point & p) const;
};

class Square : public Rectangle{
public:
    Square(Point center = Point(), float side = 0);
};

class Circle : public Ellipse{
public:
    Circle(Point center = Point(), float radius = 0);
};

#endif // SHAPES_H
