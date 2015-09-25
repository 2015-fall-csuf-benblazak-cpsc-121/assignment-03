#ifndef SHAPE_H
#define SHAPE_H

class Shape{

public:
	virtual bool contains(const Point& p) const = 0;
	virtual ~Shape(){}


protected:
	int width;
	int height;

};

class Rectangle : public Shape{

public:
	Rectangle(){
		width = 25;
		height = 10;
	}


};

class Ellipse : public Shape{


};

class Square : public Rectangle{
public:
	Square(){
		width = 20;
		height = 20;
	}

};

class Circle : public Ellipse{


};

#endif 
