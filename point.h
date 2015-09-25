#ifndef POINT_H
#define POINT_H

class Point
{
    private:
        float x;
        float y;
    
    public:
        Point(float x = 0, float y = 0);
    
    double getX() const {return x; }
    double getY() const {return y; }
    
    double distance(const Point &a) const;
};

#endif
