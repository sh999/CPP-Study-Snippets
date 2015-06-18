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

void arrayFunc(int arr[]){
    cout << arr[0];
}

void printAll(int arr[]){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i];
    }
}

int main(){
    int a[] = {3,2,73};
    int b[3]{1,2,44};
    int c[2][2] = {{0,1},{6,9}};
    cout << a[2] << endl;
    cout << b[1] << endl;
    cout << c[0][1] << endl;
    arrayFunc(a);
    
    
}