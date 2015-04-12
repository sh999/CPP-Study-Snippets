/*
 Initialize an array of integers with values
 Declare an array; what's the difference between declaring and initializing?
 Initialize an array with a shorthand syntax
 Declare a 2-Dimensional array
 Pass an array into a function to print its first value
    What is actually passed?
 Pass an array into a function to print all of its values
 */
 
#include <iostream>
using namespace std;

void printFirstValue(int arg[]){    // What's passed is the array's address, 
    cout << arg[1];
}

void printAllValues(int arg[], int size){
    for(int i = 0; i < size; i++){
        cout << arg[i] << "\n";
    }  
}

int main(){
    int a[5] = {0,1,2,3,4}; // Initialization; values are given directly
    int b[5];   // Declaration; no values are given but the default 0
    int c[5] {3,4,5,6,7};   // Shorthand syntax
    int twoDArray[3][4];
    printFirstValue(c);
    printAllValues(a, 5);
}