/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 Matthew Kang <matthesk@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

#include "Point.h"
#include "Shape.h"
#include <iostream>

#include <chrono>
#include <thread>

int main() {

	const int frames = 50;
	const int frameSleep = 70;  //units of milliseconds

	for (double f = 0; f < frames; f++) {

		void draw(const int count, const Shape * const s[]);

		Ellipse e(Point(20 + f/4, 15 + f/4), Point(30 + f/4, 15 + f/4), 30);
		Rectangle r(Point(10 + f, 10 + f/2), 5, 10);
		Circle c(Point(5 + f, 5 + f / 4), 4);
		Square s(Point(50 - f / 2, 20 - f / 3), 6);

		Shape * shapes[] = { &r, &e };

		draw(sizeof(shapes) / sizeof(Shape *), shapes);

		std::this_thread::sleep_for(std::chrono::milliseconds(frameSleep));
	}

	return 0;
}

void draw(const int count, const Shape * const s[]) {
	const int xPixel = 80;
	const int yPixel = 25;

	const double xScale = 1;
	const double yScale = 1.9;


	for (double yUnscaled = 0; yUnscaled < yPixel; yUnscaled++) {
		double y = yUnscaled * yScale;

		for (double xUnscaled = 0; xUnscaled < xPixel; xUnscaled++) {
			double x = xUnscaled * xScale;

			bool includePoint = false;
			for (int c = 0; c < count; c++) {
				if ((*s[c]).contains(Point(x, y))) {
					includePoint = true;
				}
				if (includePoint) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
			}




		}
	}
}
