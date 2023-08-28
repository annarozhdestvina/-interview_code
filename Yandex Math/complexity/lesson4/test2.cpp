#include <iostream>

bool digit(int* digitcountcopy, int* digitcountcopy2, int length) {
for(int i = 0; i < length; i++) 
    if(digitcountcopy2[i] != digitcountcopy[i])
        return false;
    return true;   
}

int main() {
    int array = 22120128;
    int array2 = 22120218;

    int number = 1;
    int counter = 0;
    while(array > number) {
        ++counter;
        number *= 10;
    }
    const int length = counter;


    std::cout << counter<<'\n';
    int* digitcount = new int[length] {0};
    int* digitcountcopy = new int[length] {0};
    int* digitcount2 = new int[length] {0};
    int *digitcountcopy2 = new int[length] {0};

    for(int i = 0; i < length; i++) {
        if(array > 0) {
            digitcount[i] = array%10;
            array = array/10;
        }
    }
    for(int i = 0; i < length; i++) {
        if(array2 > 0) {
            digitcount2[i] = array2%10;
            array2 = array2/10;
        }
    }

            //  array2[array[i]] +=1;
    for(int i = 0; i < length; i++) 
        std::cout << digitcount[i] << ' ';
    std::cout << '\n';

    for(int i = 0; i < length; i++) 
        std::cout << digitcount2[i] << ' ';

    for(int i = 0; i < length; i++) {
        // digitcount[digitcount[i]] +=1;
        if(digitcount[i] !=0) 
            digitcountcopy[digitcount[i]] += 1; 
    }

    for(int i = 0; i < length; i++) {
        if(digitcount2[i] !=0) 
            digitcountcopy2[digitcount[i]] += 1; 
    }
    std::cout << "\nfirst spisok of numbers\n";
    for(int i = 0; i < length; i++) 
        std::cout << digitcountcopy[i] << ' ';

    std::cout << "\nsecond spisok of numbers\n";
    for(int i = 0; i < length; i++) 
        std::cout << digitcountcopy2[i] << ' ';
    std::cout << '\n';

    for(int i = 0; i < length; i++) 
        if(digitcountcopy2[i] != digitcountcopy[i])
        std::cout << "false";

    std::cout << digit(digitcountcopy, digitcountcopy2, length);

    return 0;
}