/*
Demonstrate usage of copy constructor
*/
#include <iostream>
#include <string>

class base_tool{
public:
	int id;
	std::string name;
	double price;
	base_tool(int id, std::string name, double price){
		this->id = id;
		this->name = name;
		this->price = price;
	}
	// copy constructor
	// after colon, each variable is initialized
	//  using the original object's data 
	//  original object is used as reference
	// note the empty body between { } 
	base_tool(const base_tool &orig):
		id(orig.id),
		name(orig.name),
		price(orig.price)
		{}

	void display_properties(){
		std::cout << "Tool Properties" << std::endl;
		std::cout << "===============" << std::endl;
		std::cout << "ID    = " << id << std::endl;
		std::cout << "Name  = " << name << std::endl;
		std::cout << "Price = " << price << std::endl;
	}

	double apply_discount(double x){
		price = price - x;
	}
};

int main(){
	base_tool t1(1, "Wrench", 13.23);
	std::cout << "Tool 1:" << std::endl;
	t1.display_properties();
	base_tool t2 = t1;
	std::cout << "Tool 2:" << std::endl;
	t2.display_properties();
	std::cout << "Discounting tool 1" << std::endl;
	t1.apply_discount(0.0);
	t1.display_properties();
	std::cout << "Discounting tool 2" << std::endl;
	t2.apply_discount(5.0);
	t2.display_properties();
}