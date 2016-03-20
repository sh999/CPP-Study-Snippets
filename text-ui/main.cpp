/*

Text UI creation aimed to be easily
modifiable

Practice on proper OOP techniques

*/
#include <iostream>
#include "base_ui.h"

int main(){
	base_ui home;	// home ui
	home(
		"1) New",
		"2) Load",
		"3) Save",
		"4) About",
		"5) Quit"
	)
}
