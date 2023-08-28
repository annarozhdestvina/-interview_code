#include <iostream>
#include <set>
#include <map>
#include <algorithm>

bool less1(const std::pair<char, int>& a, const std::pair<char,int>& b);
int main() {
    std::string myString;
    std:: cin >> myString;
    std::set<char> variants {myString.begin(), myString.end()};

    std::map<char, int> myMap;
    for(char n : variants) {
        // std::cout << n;
        myMap.insert(std::make_pair(n, 1));  
    }
    // std::cout << std::endl;
    
    // std::map<char, int> myMap;
    // for(char n : variants) {
    //     myMap.insert(std::make_pair(n, 1));             
    // }
    
    for(int i = 0; i < myString.length() - 1; i++) 
        myMap.at(myString[i]) += 1; 
        
    
    // for (const auto& element : myMap)
    //     std::cout << element.first << "\t" << element.second << std::endl;
    
    std::map<char, int>::iterator max = std::max_element(
        myMap.begin(), 
        myMap.end(),
        // [] (const std::pair<char, int>& a, const std::pair<char,int>& b)->bool
        // { 
        //     return a.second < b.second; 
        // } 
        less1
    );
    std::cout << max->first << '\n'; // << " , " << max->second << "\n";
     
    


    return 0;
}

bool less1(const std::pair<char, int>& a, const std::pair<char,int>& b)
{
    return a.second < b.second; 
}