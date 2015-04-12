/*
 Create Circle class with area() that returns area of the circle
 Include a constructor that has radius as a parameter
 Make two area() functions (different names), one defined within class declaration
    and the other defined outside of it
 Make another constructor that takes no arguments
    This constructor creates a unit circle with radius of 1
    What is this constructor called?
 */
#include <iostream>
#include <math.h>
using namespace std;
class Circle{
    float radius;
public:
    Circle();
    Circle (float rad){
        radius = rad;
    }
    float area(){
        return pow(radius,2) * M_PI;
    }
    float areaOutside();
};

float Circle::areaOutside(){
    return pow(radius,2) * M_PI;
}

Circle::Circle(){   // Default constructor
    radius = 1;
}

int main(){
    Circle c(3);
    Circle d;

    cout << c.area() << endl;
    cout << c.areaOutside() << endl;
    cout << d.area();
}