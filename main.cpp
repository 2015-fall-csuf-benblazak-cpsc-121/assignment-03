 /* ----------------------------------------------------------------------------
   * Copyright &copy; 2015 Randy Tanizawa <rtanizawa@csu.fullerton.edu>
   * Released under the [MIT License] (http://opensource.org/licenses/MIT)
   * ------------------------------------------------------------------------- */

  /**
   * Program to create shapes and move them around.
   */

#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <thread>
#include "Point.h"
#include "Shapes.h"

using::std::cout;
using::std::endl;

HANDLE windoW = GetStdHandle(STD_OUTPUT_HANDLE);
COORD pos = {0,0};
void draw(const int amount, const Shapes * const s[]);
void place(HANDLE, const Point & p);
void outline();
double random_P(int low, int high)
{
    return rand() % ((high - low + 1) + low);
};

int main()
{
    srand(time(NULL));
    outline();
    Point po(20,4);
    Point ro(random_P(1,60),random_P(1,20));
    Squares sq(4);
    Squares qq(6);

    sq.move_right(ro, 14);
    Sleep(200);
    sq.move_down(ro, 15);


    Sleep(1000);
    return 0;
}

void outline()
{
    for(int y = 0; y < 25; y++)
    {
        cout << "|";
        for(int x = 1; x < 79; x++)
        {
            if(y < 1 || y > 23)
                cout << "-";
            else if(x != 78)
                cout << " ";
            else
                cout << "|";
        }
        cout << endl;
    }
}

