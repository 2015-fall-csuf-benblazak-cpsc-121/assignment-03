#ifndef SHAPE_H
#define SHAPE_H
#include "point.h"

class Shape
{
    virtual bool contains(const Point & p) const = 0;
};

class Ellipse: public Shape //This must be override pure virtual function
{
    public:
        Ellipse(Point(10-(f/3),35+(f/3)), Point(25-(f/3),35+(f/3)), 22+f );
};

class Rectangle: public Shape //This must be override pure virtual function
{
    public:
        Rectangle(Point(5+f,5),2),8);
};

class Square: public Rectangle
{
    public:
        Square(Point(50-(f/2),5+(f/2)),7);
};

class Circle: public Ellipse
{
    public:
        Circle(Point(50+(f/5),35),15);
};

#endif
