/*
Goal:
=====
Demonstrate design of observer pattern

Components:
===========
	Subject: Can change states; when changing, must inform observer
	Observer: Keeps track of how subjects change
	There may be multiple observers on a subject

References:
===========
https://sourcemaking.com/design_patterns/observer/cpp/3
Task:
	Complete observer code
*/
#include <iostream>
#include <vector>

class Subject {
public:
	vector<class Observer> all_observers;
	int value;
	void attach(Observer *observer){		// Link subject with all observers
											//  Called by observer for this subject
		all_observers.push_back(observer)
	}
	void notify(){

	}
	void set_val(int x){
		value  = x;
		notify();	// Notify observer due to change of state
	}
	void get_val(){
		return value;
	}
};

class Observer {
public:
private:
protected:
};

int main(){

}