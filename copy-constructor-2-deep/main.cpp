/*
Demonstrate why implementing your own copy constructor
is important. The compiler generated copy ctor is not
ideal if the object has pointer members. The generated
ctor will merely copy the pointer, but what we want is
to also copy the data that is pointed to

References:
https://en.wikipedia.org/wiki/Copy_constructor_(C%2B%2B)#User-defined_copy_constructor
*/
#include <iostream>
#include <array>

using namespace std;
class database{
public:
	int items[10];
	int* last_item_ptr;	// points to last item in items[]
	database(){
		for(int i = 0; i < 10; i++){
			items[i] = i;
		}
		last_item_ptr = &items[9];
	}
	database(const database &orig)
	// copy constructor
		{
			for(int i = 0; i < 10; i++){
			items[i] = orig.items[i];
		}
			last_item_ptr = &items[9];	// ensures when copying, pointer points to 
										//  correct object, not the original value
		}
	void display(){
	// Display database items
		for(int i = 0; i < 10; i++){
			cout << "item " << i << " value = " << items[i] << endl;
		}
	}

};
int main(){
	database d;	
	d.items[4] = 99999;
	d.display();
	cout << "object 1 address = " << &d << endl;
	cout << "last item ptr = " << d.last_item_ptr << endl;
	cout << "actual address of last item = " << &(d.items[9]) << endl;
	database d2 = d;
	d2.display();
	cout << "object 2 address = " << &d2 << endl;
	cout << "last item ptr = " << d2.last_item_ptr << endl;
	cout << "actual address of last item = " << &(d2.items[9]) << endl;

}
