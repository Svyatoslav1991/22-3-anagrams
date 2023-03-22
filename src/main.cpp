#include <iostream>
#include <string>
#include <map>

#include "functions.h"

int main()
{
	std::cout << "\tTASK 3\n";
	std::cout << "\tANAGRAMS\n\n";

	std::map<char, int64_t> wordNumber1, wordNumber2;

	std::cout << "The first word\n";
	std::string firstWord = myCin<decltype(firstWord)>();
	addWordToMap(wordNumber1, firstWord);


	std::cout << "The second word\n";
	std::string secondWord = myCin<decltype(secondWord)>();
	addWordToMap(wordNumber2, secondWord);

	std::cout << "\nThe words " << firstWord << " and " << secondWord << " are ";

	if (isAnagrams(wordNumber1, wordNumber2))
	{
		std::cout << "anagrams\n";
	}
	else
	{
		std::cout << "not anagrams\n";
	}


	return 0;
}
