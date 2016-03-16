/*
Demonstrate the use of static variables
Static variables are variables that all objects of
a class shares. It won't change from one object
to the next; it's inherent to that class

Task:
Create a class that has two members, one static
and one non static. Create objects of that class
with different non static member values and print
out the data members for all objects.
*/

#include <iostream>
using namespace std;

class S{
public:
	int data;
	static const int stat_var;
	S(int data){
		this->data = data;
	}
};

const int S::stat_var = 9000;  // can't assign value of static variable in line with its declaration

int main(){
	S x(1);
	S y(2);
	S z(3);
	cout << "x data: " << x.data << endl;
	cout << "x stat var: " << x.stat_var << endl;
	cout << "y data: " << y.data << endl;
	cout << "y stat var: " << y.stat_var << endl;
	cout << "z data: " << z.data << endl;
	cout << "z stat var: " << z.stat_var << endl;
}