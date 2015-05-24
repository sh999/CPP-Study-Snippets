/*
 Task:
 Create a vector of ints and initialize with a set of numbers using a loop
 Insert an element after that
 Print the vector values
 Delete the last element
 Print the vector again
 */
#include <iostream>
#include <vector>
int main(){
    std::vector<int> numbers;
    for(int i = 0; i <= 10; i++){
        numbers.push_back(i);   // Inserts a value in the vector
    }
    numbers.push_back(99);
    for(auto i : numbers){
        std::cout << i << std::endl;
    }
    numbers.pop_back();
    std::cout << "After deleting the last element = " << std::endl;
    for(auto i : numbers){
        std::cout << i << std::endl;
    }
}