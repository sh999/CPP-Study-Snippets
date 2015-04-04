/*
Declare an int and a double
Call a function with the same name that will
print a unique message depending if the argument is
an int or a double
*/
#include <iostream>
using namespace std;

void display(int a){
	cout << "\nPrinting integer";
}

void display(double a){
	cout << "\nPrinting double";
}

int main(){
	int i;
	double d;
	display(i);
	display(d);
}