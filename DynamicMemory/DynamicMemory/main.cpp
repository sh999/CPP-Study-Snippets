#include <iostream>
using namespace std;
int main(){
    // Dynamically allocate an integer in the heap
    int* a = new int;
    // Assign it some value
    *a = 30;
    cout << "1st = " << *a << " ";
    // With the same variable, dynamically allocate
    // by initializing with an int literal
    delete a;
    a = new int(200);
    cout << "2nd = " << *a;
    // What is required after you're done allocating
    // memory in the heap?
    delete a;
    // What does delete actually delete?
    //  Doesn't delete the pointer, but frees the allocated
    //  memory in the heap for future uses
    // What happens to the status of a pointer after doing delete?
    //  Becomes a dangling pointer because it points to nothing
}