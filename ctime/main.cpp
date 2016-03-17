/*
Demonstrate the use of ctime to print current time

Tasks:
Print current time in default mode
What is the current time based on?
What functions are necessary to find time or for conversions?
How do you convert to a custom formatting?

References:
http://en.cppreference.com/w/cpp/chrono/c/ctime
http://en.cppreference.com/w/cpp/chrono/c/strftime
*/
#include <ctime>
#include <iostream>

int main(){
	std::time_t now = std::time(NULL);		// time_t is int representation of time 
											// must pass in a pointer to time() to get secs from 1970, a base point for time
	std::cout << "Secs from 1970 = " << now << std::endl;		
	std::cout << "Current time = " << std::ctime(&now) << std::endl;		// ctime() converts above secs to nice date/clock formatting
																			// must pass in address of now
	char custom_format[100];
	std::strftime(custom_format, sizeof(custom_format), "%I:%M %p, %A %b %d '%y", std::localtime(&now));		// note special formatting		
	std::cout << "Current time = " << custom_format << std::endl;
}