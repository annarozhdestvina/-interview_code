// ab
// aabbccd
//              output 4

#include <iostream>
#include <string>
#include <set>
#include <map>

int main() {
    std::string jewelry;
    std::string stones;

    std::getline(std::cin, jewelry);
    std::getline(std::cin, stones);

    std::set<char> variants {jewelry.begin(), jewelry.end()};
    
    std::map<char, int> myMap;
    for(int i=0; i < stones.size(); i++) {
        myMap.insert(std::make_pair(stones[i], 0));
    }

    for(int i=0; i < stones.size(); i++) {
        myMap.at(stones[i]) += 1;
    }


    std::cout <<'\n';
    for(auto el : myMap)
        std::cout << el.first << ' ' << el.second <<'\n';

    int counter =0;
    for(auto el : myMap) {
        for(int i=0; i < jewelry.size(); i++) {
            if(el.first == jewelry[i]) {
                std::cout << "counter" << counter <<'\n';
                counter += el.second;
                std::cout << el.first << el.second <<'\n';
            }
        }
    }


    std::cout << "counter = "<< counter << '\n';
    return 0;
}