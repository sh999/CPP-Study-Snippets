/*
 In this example of polymorphism, Rectangle and Triangle classes
 inherit from the Shape class.  Each class and inherited classes 
 have area() functions.  Pointers are used to call the area() 
 functions.  In this example, the Shape area() is called instead
 of the inherited area() functions, termed static resolution,
 static linkage, or early binding.  What we want is for the 
 Rectangle or Triangle area() to be called, not the Shape area().
 This is done by using virtual keyword.  Without virtual, the 
 compiler will perform static linkage; i.e., the class area()
 overrides the subclass area()
 
 Reference:
 http://www.tutorialspoint.com/cplusplus/cpp_polymorphism.htm
 */
#include <iostream>
using namespace std;
class Shape {
protected:
    int width, height;
public:
    Shape(int a = 0, int b = 0){
        width = a;
        height = b;
    }
    int area(){
// virtual int area(){  // Using virtual will cause in the inherited area() to be called instead of this one
        cout << "\nCalling shape area";
        return 0;
    }
};

class Rectangle:public Shape{
public:
    Rectangle(int a=0, int b=0):Shape(a, b){}
    int area(){
        cout << "\nCalling rectangle area";
        return width * height;
    }
};

class Triangle:public Shape{
public:
    Triangle(int a = 0, int b = 0):Shape(a, b){}
    int area(){
        cout << "\nCalling triangle area";
        return width * height / 2;
    }
};

int main(){
    Shape *shape;
    Rectangle rectangle(20, 30);
    Triangle triangle(20, 30);
    shape = &rectangle;
    shape->area();
    shape = &triangle;
    shape->area();
}