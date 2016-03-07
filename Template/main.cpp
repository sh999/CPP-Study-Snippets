/*
Template
Create a Template that finds minimum of two numbers
Template should take in any number type, like int or double
References:
http://www.tutorialspoint.com/cplusplus/cpp_templates.htm
*/
#include <iostream>
#include <string>
using namespace std;

template<typename T>
inline T const& Min (T const& a, T const& b){
	return a > b ? b:a;
}

int main(){
	int x = 10;
	int y = 100;
	cout << "Min(" << x << "," << y << ") = " << Min(x, y) << endl;
	double d1 = 3.14;
	double d2 = 2.7;
	cout << "Min(" << d1 << "," << d2 << ") = " << Min(d1, d2) << endl;	

}