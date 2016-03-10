/*
Goal:
Demonstrate "using namespace" within a different namespace
Task:
Create two namespaces. In namespace 1, define a class. Use namespace 2 
to qualify the class from namespace 1.  
References:
https://msdn.microsoft.com/en-us/library/b451xz31.aspx
*/
#include <iostream>
using namespace std;

namespace ns1{
	class SomeClass{
	public:
		int i;
	};
}

namespace ns2{
	using namespace ns1;	 
}


int main(){
	ns1::SomeClass c1;
	ns2::SomeClass c2;
	c1.i = 2;
	c2.i = 3;	
	cout << "c1.i: " << c1.i;
	cout << "c2.i: " << c1.i;
}