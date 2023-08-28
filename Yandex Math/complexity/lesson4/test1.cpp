#include <iostream>

int main() {
    int array[] = {3, 5, 4, 2, 1, 5, 4, 5};

    const int length = sizeof(array) / sizeof(array[0]);
    std::cout <<"input\n";
    for (int i = 0; i < length; i++)
        std::cout << array[i] << ' ';
    std::cout << '\n';

    int array2[length] = {0};
    for (int i = 0; i < length; i++)
        std::cout << array2[i] <<' ';
    std::cout <<'\n';

    for (int i = 0; i < length; i++) {
        array2[array[i]] +=1;
    }

    std::cout<<"azaza\n";
    for (int i = 0; i < length; i++)
        std::cout << array2[i] <<' ';
    std::cout << '\n';

    std::cout<<"sorted\n";
    for (int i = 0; i < length; i++){
        if (array2[i] != 0) {
            for(int j = array2[i]; j > 0; j--) {
                std::cout << i << ' ';
            }
        }
    }
    // std::cout << '\n';
    // int a = 5433;
    // std::cout<<a /10;
    // char c = 'k';
    // std::cout << (int)c;
    return 0;
}