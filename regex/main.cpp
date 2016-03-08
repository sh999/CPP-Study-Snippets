/*
Regex

Task:
Use Regex to find how many words are in a sentence.

References:
http://en.cppreference.com/w/cpp/regex
*/
#include <iostream>
#include <string>
#include <regex>

int main(){
    std::string s = "When I grow up, I want to sell propane and propane accessories.";
	std::cout << s << std::endl;
	std::regex word_regex("(\\S+)");
    /*
    Pattern explanation:
    \S not whitespace
    */
	auto words_begin = std::sregex_iterator(s.begin(), s.end(), word_regex);
	auto words_end = std::sregex_iterator();
	std::cout << "Found " << distance(words_begin, words_end) << " words." << std::endl;
}