/*
Virtual
 */

#include <iostream>
using namespace std;
class Unit{
public:
    Unit(){
        cout << "Create base unit\n";
    }
    void shoot(){
        cout << "Base unit shoots\n";
    }
    virtual void jump(){
        cout << "Base unit jumps\n";
    }
    
};



class Soldier:public Unit{
public:
    Soldier(){
        cout << "Create soldier derived from unit\n";
    }
    void shoot(){
        cout << "Soldier shoots\n";
    }
    void jump(){
        cout << "Soldier jumps\n";
    }
    
};

class Firebat:public Unit{
public:
    Firebat(){
        cout << "Create firebat derived from unit\n";
    }
    void shoot(){
        cout << "Firebat flames\n";
    }
    void jump(){
        cout << "Firebat jumps\n";
    }
};

int main(){

    Unit* units[3]; // Create an array of Unit pointers
    units[0] = new Unit;    // Allocate heap space for a Unit object; set a pointer to it
    units[1] = new Soldier; // Same as above, but for a Soldier object
    units[2] = new Firebat; // Same as above, but for a Firebat object
    for(int i = 0; i < 3; i++){
        // Here, the base class shoot() is called because it is not a virtual function
        units[i]->shoot();
    }
    for(int i = 0; i < 3; i++){
        // Here, the derived class shoot() is called because jump() is virtual
        units[i]->jump();
    }

    
}