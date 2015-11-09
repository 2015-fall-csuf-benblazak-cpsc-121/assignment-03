#include "shapes.h"

Ellipse::Ellipse(Point Focal1, Point Focal2, float distance_focal_to_edge){
	F1 = Focal1;
	F2 = Focal2;
	dis_focal_to_edge = distance_focal_to_edge;
}

bool Ellipse::contains(const Point &p) const {
	return p.calc_distance(F1) + p.calc_distance(F2) <= dis_focal_to_edge;
}

Circle::Circle(Point center, float radius) : Ellipse(center, center, radius){}
