/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 James Mabe <jamespmabe@gmail.com>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * This header file contains the superclass of classes in shapes.cpp
 */

#ifndef SHAPES_H
#define SHAPES_H

#include "point.h"

class Shape{
public:
    virtual bool contains(const Point & p) const = 0;
    virtual ~Shape() {}
    
};

#endif // SHAPES_H

