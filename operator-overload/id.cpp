#include "id.h"
#include <iostream>
#include <iomanip>

id::id(std::string n, double i, double p, int a){
	name = n;
	id_num = i;
	phone = p;
	age = a;
}

std::ostream& operator<<(std::ostream& output, const id &i){
	std::cout << std::setprecision(20);
	output << "Name = " << i.name << std::endl
		   << "ID   = " << i.id_num << std::endl 
		   << "Phone = " << i.phone << std::endl 
		   << "Age  = " << i.age << std::endl;
	return output;
}