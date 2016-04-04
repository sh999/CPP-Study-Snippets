/*
Pointer to member: pointer that points to nonstatic member of a class
Main difference: Doesn't point to an object but strictly a member of a class

Tasks:
Show two ways to initialize pointer to member
Show to ways to dereference them to get the values

Sources: C++ Primer 5th, p836
http://stackoverflow.com/questions/670734/c-pointer-to-class-data-member
*/

#include <iostream>
using namespace std;
class Item{
public:
	int qty;
};
int main(){
	int Item::*p_qty = &Item::qty;	// p_qty is a pointer to an int member within Item class
									// assign it to the adderss of qty, which is such member
	auto p_qty2 = &Item::qty;		// shorter way to declare such pointer
									// auto finds the implied type
	Item c1;
	c1.qty = 30;
	cout << "Item qty = " << c1.qty << endl;
	c1.*p_qty = 45;
	cout << "Item qty = " << c1.qty << endl;
	c1.*p_qty2 = 60;
	cout << "Item qty = " << c1.qty << endl;
	auto b = c1.*p_qty;
	cout << "dereferenced = " << b << endl;
	Item i;
	i.qty = 11;
	Item *p_item = &i;			// p_item is a pointer to Item i
	auto a = p_item->*p_qty;	// dereferences p_qty 
	cout << "dereferenced = " << a << endl;
}
