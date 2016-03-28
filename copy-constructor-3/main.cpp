/*
Demonstrate copy constructor's role in copying
 pointer member data
*/

#include <iostream>

class bird{
public:
	bird(int a);
	// copy constructor has same name as class
	// passes in const reference type of the same class
	bird(const bird &a);
	~bird();
	display();
private:
	int* p;
};

bird::bird(int a){
	p = new int;
	*p = a;
}

bird::bird(const bird &a){
	// copy constructor doesn't copy a pointer
	// creates a new pointer to heap data and 
	// assigns value based on the object to be copied
	p = new int;
	*p = *(a.p);
}

bird::~bird(){
	delete p;
}

bird::display(){
	std::cout << "Value = " << *p << std::endl;
}

int main(){
	bird b1(3);
	bird b2 = b1;
	b1.display();
	b2.display();
}