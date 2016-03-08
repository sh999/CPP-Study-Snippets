/*
Function overloading
Create a combine() function that has 2 versions to
demonstrate overloading. Version 1 takes in 2 ints
and returns a sum of them. Version 2 takes in 2 
strings and returns a concatenated string from them.
*/

#include <iostream>
#include <string>
using namespace std;

int combine(int a, int b){
	return a + b;
}

string combine(string a, string b){
	return a + b;
}

int main(){
	string a = "1";
	string b = "2";
	int x = 1;
	int y = 2;
	cout << combine(a,b) << endl;
	cout << combine(x,y) << endl;



}