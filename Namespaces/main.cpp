#include <iostream>
using namespace std;
namespace n1{
	int x = 3;
}
namespace n2{
	int x = 5;
}
int main(){

	cout << "n1::x = " << n1::x << endl;
	cout << "n2::x = " << n2::x << endl;
	cout << "x = " << x << endl; // Error; either specify namespace on x or have 'using namespace <namespace>' in main
}