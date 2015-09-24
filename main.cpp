/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 James Mabe <jamespmabe@gmail.com>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * A short program to print "Hello World!" to standard output.
 */

#include <iostream>
#include "shapes.cpp"
#include "point.cpp"
using std::cout;
using std::cin;

void draw(const int count, const Shape * const s[]);

int main() {
    
    Shape * shapes[] = { &r, &s, };
    draw( sizeof(shapes) / sizeof(Shape *), shapes );
    std::this_thread::sleep_for(std::chrono::milliseconds(frameSleep));
    
    return 0;
}

void draw(const int count, const Shape * const s[]){
    
    for (int i=0; i<25; i++) {
        for (int j=0; j<80; j++) {
            if (<#condition#>) {
                cout << "*";
            }
            else if (<#condition#>){
                cout << " ";
            }
        }
    }
