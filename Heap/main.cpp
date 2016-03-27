/*
Heap keeps track of the highest value
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int nums[5] = {6,1,43,22,34};
	std::vector<int> v(nums,nums+5);
	std::make_heap(v.begin(),v.end());
	std::cout<<v.front();
	
}
