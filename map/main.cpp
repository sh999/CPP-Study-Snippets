/*
Use of map container type from the standard library
A map is an associative container (key->value)

Task:
Create a word counter
Allow user to type into buffer (terminate with ctrl-d in windows)
Then display the word count for each word in the user input

Reference: Lippman C++ Primer 5th; pg 421
*/
#include <iostream>
#include <map>
#include <string>
int main(){
	std::string word;
	std::map<std::string, size_t> word_count;
	while (std::cin >> word){
		word_count[word] = word_count[word] + 1;
	}
	for (const auto &w : word_count){
		std::cout << "Word " << w.first << " occurs " << w.second << ((w.second > 1) ? " times\n" : " time") << std::endl;
	}
}