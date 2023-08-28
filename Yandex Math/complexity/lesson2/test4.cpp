#include <iostream>

void find_two_max(const int* array, int length, int* max1, int* max2) {
    *max1 = (*max1 > *max2) ? array[0] : array[1];
    *max2 = (*max1 < *max2) ? array[0] : array[1];
    if(length < 3)
        std::cout << *max1  << ' ' << *max2 << '\n';
    else {
        for(int i = 2; i < length; i++) {
            int temp = 0;
            if(*max1 < array[i]) {
                *max2 = *max1;
                *max1 = *(array + i);
            } else if(*max2 < array[i]) {
                *max2 = array[i];
            }
        }
        std::cout << *max1  << ' ' << *max2 << '\n';
    }
}

int main() {
    // int array[] = {2, 1, 5, 4, 3, 5};
    int array[] = {9, 7, 5, 4, 8, 5};
    // int array[] = {9, 7, 5, 4, 8, 5, 9};
    // int array[] = {0, 1, 5, 4, 8, 5, 0};
    int length = sizeof(array) / sizeof(array[0]);
    std::cout << length << '\n';

    int max1 = array[0];
    int max2 = array[1];

    find_two_max(array, length, &max1, &max2);

}