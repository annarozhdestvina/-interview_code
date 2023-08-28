#include <iostream>

void findmax2(const int* array, const int length, int *max1, int* max2) {
    *max1 = (array[0] > array[1]) ? array[0] : array[1];
    *max2 = (array[0] < array[1]) ? array[0] : array[1];
    if(length < 3) {
        std::cout << *max1 << *max2;
    } else {
        for(int i = 2; i < length; i++) {
            if (array[i] > *max1) {
                *max2 = *max1;
                *max1 = *(array + i);
            } else if(*max2 < array[i]) 
                *max2 = array[i];
        }
        std::cout << *max1 << ' ' << *max2;
    }
}

int main() {
    const int array[] = {0, 4, 5, 9, 6, 10};
    const int length = sizeof(array) / sizeof(array[0]);
    int max1 = array[0];
    int max2 = array[1];

    findmax2(array, length, &max1, &max2);



    return 0;
}