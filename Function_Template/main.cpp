/*
	Task:
	Create a template function that returns the smaller value 
	between two numbers of the same type
	Test by calling the function twice, one by passing integers, and 
	second by passing doubles
*/

#include <iostream>

template <typename Type>
Type min(Type a, Type b){
	return (a < b) ? a : b;
}
int main(){
	int a = 333;
	int b = 33;
	double c = 22;
	double d = 222;
	std::cout << min(a, b)<<"\n";
	std::cout <<  min(c, d);
}