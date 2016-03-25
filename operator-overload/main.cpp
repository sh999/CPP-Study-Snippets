/*
Demonstrate how to overload the << (insertion) operator
to display an output buffer representation of an object
*/

#include <iostream>
#include "id.h"

int main(){
	id alice("Alice", 123456, 8534432212, 84);
	id bob("Bob", 789393, 3448593310, 22);
	std::cout << "Subject 1 = " << alice << std::endl;
	std::cout << "Subject 2 = " << bob << std::endl;
}