/*
global.cpp

A study on the intricacies of local vs global variables
*/

#include <iostream>
using namespace std;
int x = 5;
int main(){
	int x = 3;

	// x had already been defined outside of main, so
	//  x in the local contect is printed below
	cout << "x local = " << x << endl;

	// you can still access the global x by having ::
	//  to signify global namespace
	cout << "x global = " << ::x << endl;
}
