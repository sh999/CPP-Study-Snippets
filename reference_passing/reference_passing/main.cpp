#include <iostream>
using namespace std;

int doubleNumber(int a){
    return a * 2;
}

void doubleNumberPermanently(int& a){
    a =  a * 2;
}

int main(){
    int x = 3;
    cout << "x before function call = " << x << endl;
    doubleNumber(x);
    cout << "x after function call = " << x << endl;
    int y = 6;
    cout << "y before function call = " << y << endl;
    doubleNumberPermanently(y);
    cout << "y after function call = " << y;
}