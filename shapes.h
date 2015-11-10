#ifndef SHAPES_H
#define SHAPES_H
// ----------------------------------------------------------------------------


class shape {
public:
	shape();
};

class rectangle : public shape {
public:
	rectangle();
};

class ellipse : public shape {
public:
	ellipse();
};

class square : public rectangle {
public:
	square();
};

class circle : public ellipse {
public:
	circle();
};

// ----------------------------------------------------------------------------
#endif  // SHAPES_H
