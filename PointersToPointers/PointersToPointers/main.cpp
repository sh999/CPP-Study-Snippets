/*
 Create pointers to pointers (and beyond)
 */
 

#include <iostream>
using namespace std;
int main(){
    int a = 20;
    int &b = a;
    int *p = &a;
    int **p2 = &p;
    int ***p3 = &p2;
    cout << "a = " << a;
    cout << "\nb = " << b;
    cout << "\np = " << p;
    cout << "\nvalue pointed by p = " << *p;
    cout << "\np2 = " << p2;
    cout << "\nvalue pointed by p2 = " << *p2;
    cout << "\np3 = " << p3;
    cout << "\nvalue pointed by p3 = " << *p3;
}