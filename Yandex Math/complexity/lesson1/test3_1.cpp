#include <iostream>
#include <set>
#include <map>
#include <algorithm>

int main() {
    std::string myString;
    std::cin >> myString;
    std::set<char> variants {myString.begin(), myString.end()}; // Nlog(N)

    std::map<char, int> myMap;
    for(char n : variants) {    //      O(N)
        myMap.insert(std::make_pair(n, 0));  // log(N)
    }  //   -> Nlog(N)
    
    for(int i = 0; i < myString.length(); i++) // O(N)
        myMap.at(myString[i]) += 1; 

    for(const auto& element : myMap)
        std::cout << element.first << '\t' << element.second << std::endl;


unsigned currentMax = 0;
char arg_max = ' ';
    for(auto it = myMap.cbegin(); it != myMap.cend(); ++it ) {
    if (it ->second > currentMax) {
        arg_max = it->first;
        currentMax = it->second;
    }
}
std::cout <<  arg_max << std::endl;


    // for(const auto& element : myMap)
    //     std::cout << element.first << '\t' << element.second << std::endl;



    // std::string word("aaaaabbbcccdefgh!");
    std::string word;
    std::cin >> word;

    std::unordered_map<char, int> dictionary;
    for (char symbol : word)
        // if (dictionary.contains(symbol)) // c++20
        if (dictionary.find(symbol) != dictionary.cend())
            dictionary[symbol] += 1;
        else
            dictionary.insert(std::make_pair(symbol, 1));

    
    
    std::cout << "shorter version:\n";
    for (const auto& [symbol, number] : dictionary)
        std::cout << symbol << ": " << number << '\n';

    int best_number = 0;   // because all are present at least at once, so minimum is 1
    char best_symbol = '?';
    for (const auto& [symbol, number] : dictionary)
        {

        if (number > best_number)
        {
            best_number = number;
            best_symbol = symbol;
        }
        }
    std::cout << "most -"<< best_symbol << ": " << best_number << '\n';

    
    return 0;
}