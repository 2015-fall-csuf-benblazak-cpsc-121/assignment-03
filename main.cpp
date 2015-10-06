// assignment3.cpp : Defines the entry point for the console application.
//


#include <iostream>
using std::cout;
using std::endl;

#include "shapes.h"
#include "point.h"
#include "shapes.cpp"
#include "point.cpp"





void draw(const int count, const Shapes * const s[]){
	const int ROWS = 25;  //y value
	const int COLS = 80;  //x value
	const float ROWSCALE = 1.9;
	const int COLSCALE = 1;

	for (int y = 0; y <= ROWS; y++){
		float ypos = y * ROWSCALE;

		for (int x = 0; x <= COLS; x++){
			float xpos = x * COLSCALE;

			bool includePoint = false;

			for (int c = 0; c < count; c++)
			if (s[c]->contains(Point(xpos, ypos))){
				includePoint = true;
			}

			if (includePoint){
				cout << "*";
			}
			else{
				cout << " ";
			}
				
		}
		cout << endl;
	}
}


int main(){

	Ellipse s(15,25,30);
	Circle c(50,20);

	Shapes * shapes[] = { &s, &c, };
	
	draw(sizeof(shapes) / sizeof(Shapes *), shapes);

	return 0;
}

