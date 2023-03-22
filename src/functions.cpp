#include "functions.h"

//add word to map
void addWordToMap(std::map<char, int64_t>& myMap, const std::string str) noexcept
{
	for (const auto& c : str)
	{
		auto it = myMap.find(c);

		if (it == myMap.end())
		{
			myMap.insert(std::make_pair(c, 1));
		}
		else
		{
			it->second++;
		}
	}
}

//************************************************************************************

//Check words for anagrams
bool isAnagrams(const std::map<char, int64_t>& firstMap, const std::map<char, int64_t>& secondMap) noexcept
{
	if (firstMap.size() != secondMap.size())
	{
		return false;
	}

	for (auto it1 = firstMap.begin(), it2 = secondMap.begin(); it1 != firstMap.end() && it2 != secondMap.end(); it1++, it2++)
	{
		if (it1->first != it2->first || it1->second != it2->second)
		{
			return false;
		}
	}



	return true;
}