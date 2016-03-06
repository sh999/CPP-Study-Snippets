/*
 Study of Set implemented in standard library
 */
#include <iostream>
#include <set>
using namespace std;
int main(){
    // Create a set of integers
    set<int> intSet;
    // Put values in the set
    intSet.insert(30000);
    intSet.insert(234);
    intSet.insert(333);
    // Loop through the set and print each element
    set<int>::iterator a;
    for(a = intSet.begin(); a != intSet.end(); a++){
        cout << *a << endl;;
    }
    insert
}