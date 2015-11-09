Point::Point(float xcoord, float ycoord) : X(xcoord), Y(ycoord) {} //get x and y

float Point::getX() const {
	return X;
}

float Point::getY() const {
	return Y;
}

float Point::calc_distance(const Point &a) const{
	return sqrt(pow(this->X - a.X,2) + pow(this->Y - a.Y,2));
}
