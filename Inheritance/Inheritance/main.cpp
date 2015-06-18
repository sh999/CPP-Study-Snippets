#include <iostream>
using namespace std;

class Shape {
public:
    void setWidth(int w){
		width = w;
	}
	void setHeight(int h){
		height = h;
	}
protected:
	float width;
	float height;
};

class Triangle: public Shape {	// Triangle derives from Shape
public:
	float getArea(){
		return width * height / 2;
	}
};

int main(){
	Triangle t;
	t.setWidth(13);
	t.setHeight(3);

	cout << "Area of triangle = " << t.getArea();

}