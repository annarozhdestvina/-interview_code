#include <iostream>

int finden(const int* array, const int length) {
    int answer = -1;
    bool a = false;
    for(int i = 0; i < length; i++) {
        if(array[i]%2 == 0 && (a || answer > array[i]))
            answer = array[i];
            a = true;
        // else if(answer > array[i])
            // answer = array[i];
    }
    return answer;
}

int main() {
    const int array[] = {1, 3, 2, 3, 5, 7, 8};
    const int length = sizeof(array) / sizeof(array[0]);

    int s = finden(array, length);
    std::cout << s;

    return 0;
}