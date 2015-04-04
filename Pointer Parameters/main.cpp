/* 
	Pointer Parameters
*/

#include <iostream>
using namespace std;
void change(int *z){
	*z = 3;
}

int main(){
	int a = 33;
	change(&a);	// Pass address so that the value can be changed. Passing a itself won't work (see function's parameter, which is a pointer)
	cout << a;
}

