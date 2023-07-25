#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <vector>

// bool less1(const std::pair<int, int>& a, const std::pair<int,int>& b);
int main() {

    std::vector<int> nums {1, 2, 3, 7};
    std::set<int> varint {nums.begin(), nums.end()};

    int counter = 0;

    // for(std::int64_t i = 0; i < std::ssize(nums) - 1; i++) {
    //     if(nums[i] == nums[i + 1])
    //         std::cout << "duplicate el = " << nums[i];
    // }

   
   for(int i : varint)
    std::cout << i;
    std::cout <<'\n';

    std::map<int, int> intmap;
    for(int i : varint)
        intmap.insert(std::make_pair(i, 0));

    for(int i = 0; i < nums.size(); i++) // O(N)
        intmap.at(nums[i]) += 1;

    for(const auto& element : intmap) {
        // std::cout << element.first << '\t' << element.second << std::endl;
        if(element.second > 1)
            counter = 1;
    }

    if(counter == 1)
        std::cout<< "true";
        else
        std::cout << "false";

    




/*
    std::string myString;
    std:: cin >> myString;
    std::set<int> variants {myString.begin(), myString.end()};

    std::map<int, int> myMap;
    for(int n : variants) {
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
    
    std::map<int, int>::iterator max = std::max_element(
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


bool less1(const std::pair<int, int>& a, const std::pair<int,int>& b)
{
    return a.second < b.second; 
}

*/
}