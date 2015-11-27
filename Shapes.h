#ifndef SHAPES_H
#define SHAPES_H

#include <iostream>
#include <windows.h>
#include "Point.h"

 /* ----------------------------------------------------------------------------
   * Copyright &copy; 2015 Randy Tanizawa <rtanizawa@csu.fullerton.edu>
   * Released under the [MIT License] (http://opensource.org/licenses/MIT)
   * ------------------------------------------------------------------------- */

  /**
   * Description of class Shapes and its subclasses.
   */


class Shapes
{
    protected:
        int amount;
        double coords[];
        HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
    public:
        Shapes(){};
        virtual bool contains(const Point & p) const = 0;
        virtual void draw(const Point & p) = 0;
        void place(HANDLE, double x, double y);
        virtual void space(const Point & p) = 0;
        void move_right(Point& p, double distance);
        void move_down(Point& p, double distance);


};

class Rectangles : public virtual Shapes
{
    protected:
        double length;
        double width;
    public:
        Rectangles() : Shapes(){};
        Rectangles(double l, double w) : Shapes()
            {
                length = w * 1.5; width = w;
            };
        double getLength() const;
        double getWidth() const;
        void draw(const Point& p);
        void space(const Point& p);



};


class Squares : public virtual Shapes, public Rectangles
{
    protected:
        double side;
    public:
        bool contains(const Point & p) const {};
        Squares() : Rectangles() , Shapes(){};
        Squares(double s) : Rectangles(s, s) , Shapes()
        {
            side = s;
        };
        double getSide(double s) const;
        void space(){};
        void draw(){};
        using Rectangles::draw;
        using Rectangles::space;

};

class Ellipses : public Shapes
{
    protected:
        double radX;
        double radY;
        const double pi = 3.14159;
    public:
        bool contains(const Point & p) const {};
        Ellipses() : Shapes()
        {
            radX, radY = 0;
        };
        Ellipses(double rA, double rB) : Shapes()
        {
            radX = rA; radY = rB;
        };
        void draw(const Point & p)
        {
            double centerX = p.getPoint_x();
            double centerY = p.getPoint_y();
            double cx = centerX;
            double cy = centerY;
            do{
            place(screen, cx, (cy - radY));
            for(int i = 0; i < centerY; i++)
                std::cout << "**";
                cx -= 2;
                cy++;
            }while(cy != cy);
        };
        void space(){};

};

class Circle : public Shapes, public Ellipses
{
    protected:
        double rad;
        const double pi = 3.14159;
    public:
        bool contains(const Point & p) const {};
        Circle() : Ellipses() , Shapes()
        {
            rad = 0;
        };
        Circle(double r) : Ellipses() , Shapes()
        {
            rad = r;
        };
        void draw();
        void space(){};

};

#endif
