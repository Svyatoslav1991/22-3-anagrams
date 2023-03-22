#pragma once
#include <iostream>
#include <limits>
#include <string>
#include <map>

//variable value input function
template <typename T>
T myCin() noexcept
{
    bool good = true;

    T variable;

    do
    {
        std::cout << "Enter the value of the variable: ";
        std::cin >> variable;

        good = std::cin.good();

        if (!good)
        {
            std::cout << "You entered something wrong\n";
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } while (!good);

    return variable;
}

//add word to map
void addWordToMap(std::map<char, int64_t>& myMap, const std::string str) noexcept;

//Check words for anagrams
bool isAnagrams(const std::map<char, int64_t>& firstMap, const std::map<char, int64_t>& secondMap) noexcept;
