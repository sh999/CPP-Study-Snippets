/*
3/10/16
namespaces-3

Demonstrate how scope works when you have nested blocks
*/
#include <iostream>
using namespace std;
int main(){
	int a = 3;
	int b = 4;
	cout << "outer scope a = " << a << endl;
	cout << "outer scope b = " << b << endl;
	{
		int a = 6; // Because a exists in main() outer block, this a clashes. 
				   // This a will be unique to this block only, will not affect
				   //  a in the outside block
		b = 8;	   // Because b exists in main() outer block, and b was initialized
				   //  in the outer block but not in this inner block, this assignment
				   //  affects b from outer block
		cout << "inner scope a = " << a << endl;
		cout << "outer scope b = " << b << endl;

	}

	cout << "outer scope a = " << a <<  endl;
	cout << "outer scope b = " << b << endl;

}