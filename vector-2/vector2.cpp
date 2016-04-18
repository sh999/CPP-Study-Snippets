/*
Exercise 9.15 C++ Primer Ed.5
Determine whether two vectors are equal
*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> v1 = {1,2,3};
	vector<int> v2 = {1,2,3};
	for(int i = 0; i < v1.size(); i++){
		cout << "v1["<<i<<"]="<<v1[i]<<endl;
		cout << "v2["<<i<<"]="<<v2[i]<<endl;
		if(v1[i] != v2[i]){
			cout << "Vectors are not equal\n";
			break;
		}	
	}
	cout << "Vectors are equal\n";
}
	
