/*
 
 */

#include <iostream>
using namespace std;

enum Person
{
    PERSON_BOB,
    PERSON_ALICE,
    PERSON_TOM,
    PERSON_TIM
};

enum State
{
    STATE_ALABAMA = 9,
    STATE_ALASKA = -1,
    STATE_ARIZONA = 0
};

int main(){
    Person me = PERSON_BOB;
    Person myFriend = PERSON_ALICE;
    Person mySon = PERSON_TOM;
    cout << me << endl; // 0: Each defined enum is given an int value starting from 0
    cout << myFriend << endl; // 1
    cout << mySon << endl; // 2
    
    State myHomeState = STATE_ARIZONA;
    State coldestState = STATE_ALASKA;
    State southernState = STATE_ALABAMA;
    cout << myHomeState << endl;
    cout << coldestState << endl;
    cout << southernState << endl;
}