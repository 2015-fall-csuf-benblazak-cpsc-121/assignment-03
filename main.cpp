/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 Matthew Low <bblazak@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/* This program uses classes and pointers to calculate the surface area and 
volume of serveral cylinders
*/

/*-------------
 *  main.cpp
 *-----------*/
#include "FCylinder.h"

void class_area();

int main(){
	cout << "        Start of program" << endl;
	cout << "--------------------------------" << endl;
	
	//function made solely to show when the deconstructor is called
	class_area();
	cout << endl << "--------------------------------" << endl;
	
	//custom exit prompt
	cout << "End of program. Press ENTER to continue." << endl;
	cin.ignore(1000, '\n');	
return 0;
}

void class_area(){	
	FCylinder first_cyl;             //default constructor
	FCylinder *pointfc = &first_cyl; // substituted a pointer for first_cyl 
	FCylinder second_cyl(7.5, 4.0);  //overloaded constructor
	FCylinder third_cyl(*pointfc);  //copy constructor with substituted pointer

	//display values to two decimal points
	cout << fixed << showpoint << setprecision(2);
	//print out each cylinder's member variables (before operations)
	cout << "----------------" << endl;
	cout << "First (Before): " << endl;
	cout << "----------------" << endl;
	first_cyl.printSelf();
	cout << "----------------" << endl;
	cout << "Second (Before):" << endl;
	cout << "----------------" << endl;
	second_cyl.printSelf();
	cout << "----------------" << endl;
	cout << "Third (Before): " << endl;
	cout << "----------------" << endl;
	third_cyl.printSelf();
	
	first_cyl.setHeight(second_cyl.getHeight());
	first_cyl.setRadius(second_cyl.getRadius());
	
	int a = 13,              //testing pointers
		b = 14;
	int *pntA = &a,
		*pntB = &b;
	
	third_cyl.setHeight(*pntA);
	third_cyl.setRadius(*pntB);
	
	cout << endl << endl;
	cout << "----------------" << endl;
	cout << "First Cylinder" << endl;
	cout << "----------------" << endl;
	cout << "Surface Area: " << first_cyl.computeSurfaceArea() << endl;
	cout << "Volume: " << first_cyl.computeVolume() << endl;
	cout << "----------------" << endl;
	cout << "Second Cylinder" << endl;
	cout << "----------------" << endl;
	cout << "Surface Area: " << second_cyl.computeSurfaceArea() << endl;
	cout << "Volume: " << second_cyl.computeVolume() << endl;
	cout << "----------------" << endl;
	cout << "Third Cylinder" << endl;
	cout << "----------------" << endl;
	cout << "Surface Area: " << third_cyl.computeSurfaceArea() << endl;
	cout << "Volume: " << third_cyl.computeVolume() << endl;
	
	//print out each cylinder's member variables again
	cout << endl;
	cout << "----------------" << endl;
	cout << "First (After): " << endl;
	cout << "----------------" << endl;
	first_cyl.printSelf();
	cout << "----------------" << endl;
	cout << "Second (After):" << endl;
	cout << "----------------" << endl;
	second_cyl.printSelf();
	cout << "----------------" << endl;
	cout << "Third (After): " << endl;
	cout << "----------------" << endl;
	third_cyl.printSelf();
	
	cout << endl;
	cout << "Leaving scope of class_area (destroying all variables local to this function)" << endl;
}

/*--------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------------*/
/*-------------
 * FCylinder.h
 *-----------*/
 
#ifndef FCYLINDER_H
#define FCYLINDER_H

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cmath>
using std::pow;
#include <iomanip>
using std::fixed;
using std::showpoint;
using std::setprecision;

const double PI = 3.141592;

class FCylinder{
	public:
		FCylinder();
		FCylinder(double r, double h);
		FCylinder(const FCylinder& fc);
		~FCylinder();
		
		//setter methods
		void setRadius(double r);
		void setHeight(double h);
		
		//getter methods
		double getRadius();
		double getHeight();
		
		//misc. methods
		double computeSurfaceArea();
		double computeVolume(); 
		void printSelf();
	private:
		//member variables
		double radius, 
			   height;
};

#endif // FCYLINDER_H

/*--------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------------*/
/*---------------
 * FCylinder.cpp
 *-------------*/
 
 #include "FCylinder.h"

//default constructor
FCylinder::FCylinder()
{
	//default initialization
	radius = height = 1;
}

//overloaded constructor
FCylinder::FCylinder(double r, double h)
{
	radius = height = 1;
	setRadius(r);
	setHeight(h);
}

//copy constructor
FCylinder::FCylinder(const FCylinder& fc){
	radius = fc.radius;
	height = fc.height;
}

//deconstructor
FCylinder::~FCylinder(){
	cout << "Destroyed a FCylinder." << endl;
}

//----------------------Getter Methods----------------------//
//returns radius
double FCylinder::getRadius(){
	return radius;
}
//returns height
double FCylinder::getHeight(){
	return height;
}

//----------------------Setter Methods----------------------//
//set radius (as long as r > 0), else keep original
void FCylinder::setRadius(double r){
	if (r > 0)
		radius = r;
	else
		cout << "Attempted to assign invalid radius size! Retaining current radius value. " << endl;
}
//set height
void FCylinder::setHeight(double h){
	if (h > 0)
		height = h;
	else
		cout << "Attempted to assign invalid height! Retaining current height value. " << endl;
}

//---------------------Misc. Methods------------------------//
//returns surface area of FCylinder
double FCylinder::computeSurfaceArea(){
	return (2 * PI * radius * height) + (2 * PI * pow(radius,2));
}
//returns volume of FCylinder
double FCylinder::computeVolume(){
	return PI * pow(radius,2) * height;
}
//prints member variables
void FCylinder::printSelf(){
	cout << "Radius: " << radius << endl;
	cout << "Height: " << height << endl;
}








