#include <iostream>
#include "Point.h"
#include "Shapes.h"

 /* ----------------------------------------------------------------------------
   * Copyright &copy; 2015 Randy Tanizawa <rtanizawa@csu.fullerton.edu>
   * Released under the [MIT License] (http://opensource.org/licenses/MIT)
   * ------------------------------------------------------------------------- */

  /**
   * Method prototypes for class Shapes and its subclasses.
   */


using::std::cout;


void Shapes::place(HANDLE screen, double x, double y)
{
    COORD position;
    position.X = x;
    position.Y = y;
    SetConsoleCursorPosition(screen, position);
}


double Rectangles::getLength() const
{
    return length;
}

double Rectangles::getWidth() const
{
    return width;
}

void Rectangles::draw(const Point & p)
{
    double px = p.getPoint_x();
    double py = p.getPoint_y();
    double pyy = py;
    do{
    place(screen, px, pyy);
    for(int i = 0; i < length; i++)
        std::cout << "*";
        ++pyy;
      }while(pyy != py + width);
}

void Rectangles::space(const Point & p)
{
    double px = p.getPoint_x();
    double py = p.getPoint_y();
    double pyy = py;
    do{
    place(screen, px, pyy);
        for(int i = 0; i < length; i++)
        std::cout << " ";
        ++pyy;
    }while(pyy != py + width);
}


void Shapes::move_right(Point& p, double distance)
{
    double span = distance + p.getPoint_x();
    for(double i = p.getPoint_x(); i < span; i++)
    {
        draw(p);
        Sleep(100);
        space(p);
        p.move_P(i , p.getPoint_y());
        draw(p);
    }
}

void Shapes::move_down(Point& p, double distance)
{
    double span = distance + p.getPoint_y();
    for(double y = p.getPoint_y(); y < span; y++)
    {
        draw(p);
        Sleep(100);
        space(p);
        p.move_P(p.getPoint_x(), y +1);
        draw(p);
    }
}

