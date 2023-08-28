#include <iostream>

int findx(int* array, int length, int x) {
    int answer = -1;
    for(int i = 0; i < length; i++) {
        if(array[i] == x) 
        answer = i;
    }
    return answer;
}

int main() {
    int n;
    std::cout << "input size of array: ";
    std::cin >> n;

    std::cout << "input elements of array: \n";
    int *array = new int[n];
    for(int i = 0; i < n; i++)
        std::cin >> array[i]; 
    
    for(int i = 0; i < n; i++) 
        std::cout << *(array + i) << ' ';

    std::cout << '\n';
    std::cout << findx(array, n, 5);
}