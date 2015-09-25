
    /* ----------------------------------------------------------------------------
     * Copyright &copy; 2015 Veni Herrera <venedicto@csu.fullerton.edu>
     * Released under the [MIT License] (http://opensource.org/licenses/MIT)
     * ------------------------------------------------------------------------- */

    /**
     * 
     */



/* 
 * File:   point.h
 * Author: Veni
 *
 * Created on September 24, 2015, 6:06 PM
 */

#ifndef POINT_H
#define	POINT_H

class Point {
public:
    Point();
    Point(double x, double y);
    double getX();
    double getY();


private:
    double xVal;
    double yVal;







};

/* 
 * File:   point.cpp
 * Author: Veni
 *
 * Created on September 24, 2015, 6:06 PM
 */

#include <point.h>


Point::Point(){
    this->xVal = 0;
    this->yVal = 0;
}

Point::Point(double x, double y){
    this->xVal = x;
    this->yVal = y;
}

Point::getX(){
    return this->xVal;
}

Point::getY(){
    return this->yVal;
}


/* 
 * File:   shapes.h
 * Author: Veni
 *
 * Created on September 24, 2015, 6:07 PM
 */

#ifndef SHAPES_H
#define	SHAPES_H

class Shape{
public:
    virtual bool contains(const Point &p) const = 0;
    virtual ~Shape(){}
    
    
};



class Rectangle: public Shape{
public:
    Rectangle();
    Rectangle(double length, double width, Point start);
    bool contains(const Point &p) const;    
    
    
};


class Ellipse: public Shape{
    
};
    
    


