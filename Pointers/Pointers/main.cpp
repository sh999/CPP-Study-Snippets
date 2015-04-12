/*
 Initialize an integer and a pointer to the integer
 Change the integer value by manipulating the pointer
 */
#include <iostream>
using namespace std;
int main(){
    int *ptr;
    int val = 50;
    ptr = &val; // Pointer initialized as address of integer
    *ptr = 33;  // Changing val through ptr by the dereference operator
    cout << val;
}