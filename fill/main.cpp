/*
fill is a function defined in algorithm.h
parameters are iterators and the value to fill in
resulting in filling in of a container with that value
*/
#include <algorithm>
#include <vector>
#include <iostream>
int main(){
	std::vector<int> vec1{3,22,1,4};
	std::cout << "Original:" << std::endl;
	for (auto i: vec1){
		std::cout << i << std::endl;
	}
	std::fill(vec1.begin(), vec1.end(), 0);
	std::cout << "Filled in:" << std::endl;
	for (auto i: vec1){
		std::cout << i << std::endl;
	}
}