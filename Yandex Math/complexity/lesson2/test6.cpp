#include <iostream>

int main() {
    std::string myString("suuu aa suuu");
    std::cout << myString << std::endl;

    char c = myString[0];
    int counter = 0;
    int minlen = 0;
    int index_start = 0;
    int index_finish = 0;
    for(int i = 0; i < myString.length(); i++) {
        if(myString[i] != ' ')
            minlen++;
        else 
            break;
    }

    for(int i = 0; i < myString.length(); i++) {
        if(myString[i] != ' ' && (myString[i + 1] == ' ' || myString[i + 1] == '\0')) {
            int back = i + 1;
            while (back-- && (int)myString[back] != 0x20)
                counter++;
        // index_start = i;
        if(counter < minlen)
            minlen = counter;
            index_finish = i;
        }
        counter = 0;
    }

    std::string min;

    for(int i = 0; i < myString.length(); i++) {
        if(myString[i] != ' ' && (myString[i + 1] == ' ' || myString[i + 1] == '\0')) {
            int back = i + 1;
            while (back-- && (int)myString[back] != 0x20)
                counter++;
                min += myString[i];
        if(minlen == counter)
            std::cout << min << std::endl;
        }
        counter = 0;
    }

    std::cout << "milnen = "<< minlen << '\n';
    std::cout << "index_start = "<< index_start << '\n';
    std::cout << "index_finish = "<< index_finish << '\n';



    for(int i = 0; i < myString.length(); i++) {
        // if ()
    }

    // for(auto x : myString) {
    //     if(myString.find(' ') != -1 && counter < minlen) {
    //         counter++;
    //     } else if (counter < minlen) {
    //         minlen = counter;
    //         counter = 0;
    //     }
    // }

    // std::cout << myString.find(' ') << '\n';

    // for(int i = 0; i < myString.length(); i++) {
    //     if(myString[i] != ' ') {
    //         counter++;
    //     } else if (counter < minlen) {
    //         minlen = counter;
    //         counter = 0;
    //     }
    //     // counter = 0;
    // }

    // std::cout << "milnen = "<< minlen << '\n';
    // std::cout << "counter = "<< counter <<'\n';

    return 0;
}