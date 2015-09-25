/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 Jaemin Jin <jaemin_95@csu.fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * A short program to print shapes and move them around animately.
 */

#include "point.h"
#include "shape.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

/**
 * A function to draw the `Shape`s in `s` in a terminal.
 *
 * Arguments:
 * - `count`: The number of `Shape`s in `s`.
 * - `s`: An array containing pointers to each `Shape` to draw.
 *
 * Notes:
 * - A terminal window is typically 80 columns wide by 25 lines high.
 * - The width:height aspect ratio of a terminal character is approximately
 *   1:1.9.
 */
void draw(const int count, const Shape * const s[]);

int main()
{
    const int frames = 40;
    const int frameSleep = 70;
    
    for (double f = 0; f < frames; f++) {
        Rectangle r( Point(5+f,5), 2, 8 );
        Square    s( Point(50-(f/2),5+(f/2)), 7 );
        Ellipse   e( Point(10-(f/3),35+(f/3)), Point(25-(f/3),35+(f/3)), 22+f );
        Circle    c( Point(50+(f/5),35), 15 );
    
    Shape * shapes[] = { &r, &s, };
    
    draw( sizeof(shapes) / sizeof(Shape *), shapes );
    
    std::this_thread::sleep_for(std::chrono::milliseconds(frameSleep));
    
    return 0;  // success
}

void draw(const int count, const Shape * const s[])
{
    
}
