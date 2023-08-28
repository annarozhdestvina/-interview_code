#include <iostream>

void findmax(int* array, int length, int *max) {
    *max = array[0];
    for(int i = 1; i < length; i++) {
        if(*max < array[i]) {
            *max = array[i];  // возможно здесь будет сдожное копирование (сложные объекты)
        }
    }
}

int findfaster(int* array, int length) {
    int max = 0;
    for(int i = 1; i < length; i++)
        if(array[max] < array[i])  // но обращение по индексу может больше времени занимать
            max = i;    // а тут не слодное 
    return array[max];
}

int main() {
    int array[6] = {3, 4, 5, 2, 1, 1};
    int length = sizeof(array) / sizeof(array[0]);
    std::cout << length << '\n';

    int max = 0;
    findmax(array, length, &max);
    std::cout << max;

}