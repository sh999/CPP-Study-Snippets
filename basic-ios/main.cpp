/*
C++ I/O system contains many classes, all 
deriving from basic_ios.
e.g. iostream objects derive from basic_ios.
basic_ios class definition is in std::ios

Here is a small demonstration of creating an
ostringstream object and checking its state.
The state is returnd by ostringstream object's 
rdstate() function, which returns different 
state objects such as goodbit, badbit, eofbit

References:
http://en.cppreference.com/w/cpp/io
http://en.cppreference.com/w/cpp/io/basic_ios/rdstate

*/

#include <iostream>
#include <sstream>
int main(){
	std::ostringstream stream;
	if (stream.rdstate() == std::ios::goodbit){
		std::cout << "Good bit\n";
	}
	else if(stream.rdstate() == std::ios::badbit){
		std::cout << "Bad bit\n";
	}
	stream.setstate(std::ios::eofbit);
	if (stream.rdstate() == std::ios::eofbit){
		std::cout << "EOF bit\n";
	}
}
