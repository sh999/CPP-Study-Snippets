/*
Goal: 
Demonstrate polymorphism
	Use of virtual keyword
Create a base ID class
Derive student ID and employee ID classes from base ID
Create a virtual function display_ID which displays the
	digits of the ID
Constructors must accept integers for the ID digits

Display the individual IDs with and without vectors
*/

#include<iostream>
#include<vector>

// Base class for different types of ID cards
class ID{
public:
	int digits; 
	ID (int _digits){
		digits = _digits;

	}
	virtual int display_ID(){
		std::cout << "Generic ID = " << digits << std::endl;
	}
};

class studentID:public ID{
public:
	studentID(int a):ID(a){}
	int display_ID(){
		std::cout << "Student ID = " << digits << std::endl;
	}
};

class employeeID:public ID{
public:
	employeeID(int a):ID(a){}
	int display_ID(){
		std::cout << "Employee ID = " << digits << std::endl;
	}
};

int main(){
	ID id1(124);
	studentID id2(234234);
	employeeID id3(98);
	ID * p1 = &id1;

	// Display output individually
	p1->display_ID();
	ID * p2 = &id2;
	p2->display_ID();
	ID * p3 = &id3;
	p3->display_ID();

	// Display output using a vector of pointers
	std::vector<ID*> all_IDs = {&id1, &id2, &id3};
	// Example of dynamic binding: Using a base class pointer to "call"
	// the derived class functions
	for (ID* p:all_IDs){
		p->display_ID();
	}
}