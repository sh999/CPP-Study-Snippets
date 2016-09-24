/*
Show how iterators work
Task:
Create a vector of integers
Create an iterator for the vector
Print vector elements by using the iterator
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v{1,2,3,4,5};
	vector<int>::const_iterator vit;
	vit = v.begin();
	while(vit != v.end()){
		cout << *vit << endl;	
		vit++;
	}
}
