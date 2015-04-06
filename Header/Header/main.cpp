/*
 Task: 
    Define a function in a header file
    In main(), call that function
 */
#include <iostream>
#include "multiply.h"
int main(){
    int x, y;
    x = 3;
    y = 2;
    std::cout << multiply(x, y);
}