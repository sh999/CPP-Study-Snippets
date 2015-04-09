/*
 Task:
 Create a struct with simple variables
 Create two representative objects based on the struct
 Set and display the objects and the struct variables
 */
#include <iostream>
using namespace std;
int main(){
    struct Person{
        int age;
        int ID;
        string name;
    };
    
    Person me;
    me.age = 93;
    me.ID = 1;
    me.name = "Bob";
    cout << "My name is " << me.name << " and I am " << me.age << " years old\n";
    cout << "My ID # = " << me.ID;
    Person myFriend;
    myFriend.age = 33;
    myFriend.ID = 2;
    myFriend.name = "James";
    cout << "\nMy friend is " << myFriend.name << " and he is " << myFriend.age << " years old.\n";
    
}
