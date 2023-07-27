#include <iostream>
#include <vector>

int main() {
    std::vector<char> myString {'a', 'v', 'b', 'n', 'j'};

    for(char element : myString)
        std::cout << element << ' ';

    for(int i = 0; i < myString.size()/2; i++) {
        const char c = myString[i];
        myString[i] = myString[myString.size() - 1 - i];
        myString[myString.size() - 1 - i] = c;
    }

    std::cout << '\n';
    for(char element : myString)
        std::cout << element << ' ';

}