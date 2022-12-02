#include <iostream>
#include <math.h>

class Point{
    private:
        friend class PointFactory;
        float x, y;
        Point(float x, float y) : x(x), y(y){}
    public:
        void show(){
            std::cout << "Point is ( " << x << ", " << y << ")" << std::endl;
        }
        private:
        class PointFactory{
        public:
            static Point polarPoint(float r, float theta) { 
                return Point( r*cos(theta), r*sin(theta) );
            }
            static Point cartesianPoint(float x, float y) { 
                return Point( x, y );
            }
        };  
        public:
        static PointFactory Factory;
};



int main(){
    Point p1 = Point::Factory.polarPoint(1.3, M_PI_2);
    Point p2 = Point::Factory.cartesianPoint(1.3, M_PI_4);
    p1.show();
    p2.show();
}