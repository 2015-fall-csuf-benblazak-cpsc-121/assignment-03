/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 James Mabe <jamespmabe@gmail.com>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * References: Ben Blazak on Github.
 * ------------------------------------------------------------------------- */

/**
 * This program creates shapes and animates them.
 */

#include <iostream>
#include <thread>
#include <chrono>
#include "shapes.cpp"
#include "point.cpp"
using std::cout;
using std::cin;
using std::endl;

void draw(const int count, const Shape * const s[]){
    const float xPixels = 80, yPixels = 25;
    const float xScale = 1, yScale = 1.9;
    
    for (float yp = 0; yp < yPixels; yp++){
        float y = yp * yScale;
        
        for (float xp = 0; xp < xPixels; xp++){
            float x = xp * xScale;
            
            if (yp == 0 || yp == yPixels-1){
                cout << "-";
                continue;
            }
            
            if (xp == 0 || xp == xPixels-1) {
                cout << "|";
                continue;
                
            }
            
            bool includePoint = false;
            for (int a = 0; a < count; a++)
                if (s[a]->contains(Point(x,y)))
                    includePoint = true;
            
                if(includePoint)
                    cout << "*";
                else
                    cout << " ";
        }
        cout << endl;
    }
}

int main() {
    const int frames = 100;
    const int frameSleep = 70; //milliseconds
    
    for (float f=0; f<frames; f++){
        Rectangle r(Point(15+f), 2, 30);
        Square    s(Point(25+f, 10+f), 7);
        Ellipse   e(Point(10-(f/3), 35+(f/3)), Point(25-(f/3), 35+(f/3)), 22+f);
        Circle    c(Point(40+f, 25), 20);
        
        Shape * shapes[] = { &r, &s, &e, &c, };
        draw( sizeof(shapes) / sizeof(Shape *), shapes );
        std::this_thread::sleep_for(std::chrono::milliseconds(frameSleep));
    }
    return 0;
}
