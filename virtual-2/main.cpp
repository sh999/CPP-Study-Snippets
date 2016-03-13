/*
Demonstration of virtual function specifier
References:
http://en.cppreference.com/w/cpp/language/virtual
*/
#include <iostream>

struct Base{
	virtual void f(){
		std::cout << "Function in base" << std::endl;
	}
};

struct Derived:Base{
	void f(){
		std::cout << "Function in derived" << std::endl;
	}
};
int main(){
	Base b;
	Derived d;
	b.f();
	d.f();
	Base& br = b;
	Derived& dr = d;
	br.f();
	dr.f();
	Base* bp = &b;
	Derived* dp = &d;
	bp->f();
	dp->f();
	br.Base::f();
	dr.Base::f();
}