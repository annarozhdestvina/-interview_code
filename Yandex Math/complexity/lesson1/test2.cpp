#include <iostream>
#include <set>

int main() {

    // std::set<int> numbers{1, 2, 3, 4, 5};
    // std::set<char> string{'a', 'b', 'c', 'd', 'd'};
    // for (char n : string)
    //     std::cout << n << "\t";
    // std::cout << std::endl;
 
    // for (int n : numbers)
    //     std::cout << n << "\t";
    // std::cout << std::endl;
    
    std::string myString;
    std:: cin >> myString;
    std::set<char> variants {myString.begin(), myString.end()};

    char ans = ' ';
    int counter = 0;

    for(char i : variants) {
        int nowcnt = 0;
        for (int j = 0; j < myString.length() - 1; j++) {
            if(i == myString[j])
                nowcnt++;
            if(nowcnt > counter) {
                ans = i;
                counter = nowcnt;
            }
        }
    }
    std::cout << ans <<'\n';

    return 0;
}