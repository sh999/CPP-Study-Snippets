
/*
Demonstration of dynamic casting
Reference:
http://en.cppreference.com/w/cpp/language/dynamic_cast

D is derived from A, B
A, B are derived from V

*/
#include <iostream>
struct V{
	virtual void f(){};
};

struct A: virtual V {

};

struct B: virtual V {
	B(V* v, A* a){
		dynamic_cast<B*>(v);
		dynamic_cast<B*>(a); // undefined behavior
	}

};

struct D: A, B{
	D() : B((A*)this, this){

	}

};

struct Base{
	virtual ~Base(){}
};

struct Derived: Base{
	virtual void name() {}
};

int main(){
	D d;
	A& a = d;
	D& new_d = dynamic_cast<D&>(a);
	B& new_b = dynamic_cast<B&>(a);
	Base* b1 = new Base;
	if(Derived* d = dynamic_cast<Derived*>(b1)){
		std::cout << "downcast from b1 to d successful\n";
	}
	else{
		std::cout << "downcast from b1 to d not successful\n";
	}
	Base* b2 = new Derived;
	if(Derived* d = dynamic_cast<Derived*>(b2)){
		std::cout << "downcast from b1 to d successful\n";
	}
	else{
		std::cout << "downcast from b1 to d not successful\n";
	}
}