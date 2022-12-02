#include <iostream>
#include <math.h>

class Point{
    private:
        friend class PointFactory;
        Point(float x, float y) : x(x), y(y){}
    public:
        float x, y;
        void show(){
            std::cout << "Point is ( " << x << ", " << y << ")" << std::endl;
        }
};

class PointFactory{
    public:
        static Point polarPoint(float r, float theta) { 
            return Point( r*cos(theta), r*sin(theta) );
        }
        static Point cartesianPoint(float x, float y) { 
            return Point( x, y );
        }
};

int main(){
    Point p1 = PointFactory::polarPoint(1.3, M_PI_2);
    Point p2 = PointFactory::cartesianPoint(1.3, M_PI_4);
    p1.show();
    p2.show();
}