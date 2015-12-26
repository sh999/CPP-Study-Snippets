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
    virtual void shoot();
    void vShoot();
    
};

class Soldier:public Unit{
public:
    Soldier(){
        cout << "Create soldier derived from unit\n";
    }
    void shoot(){
        cout << "Soldier shoots\n";
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
};

int main(){
    cout << "Creating unit from main\n";
    Unit u; // Base constructor called
    cout << "Creating soldier from main\n";
    Soldier s;  // Both base and derived constructors called
    cout << "Creating firebat from main\n";
    Firebat f;
    f.shoot();
}