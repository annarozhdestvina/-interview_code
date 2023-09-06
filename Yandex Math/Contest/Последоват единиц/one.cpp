//5         output : 
// 0                1
// 1
// 0
// 1
// 0
#include <iostream>
#include <vector>

int algorithm(std::vector<int> &arr, int length) {  // а почему на массив делали указатель?
    int counter = 0;
    for(int i = 0; i < length; i++) {
        if(arr[i] == 1)
            counter++;
        else 
            counter = 0;
    }
    return counter;
}

void test_case(std::vector<int> &arr, int length, int expected, int actual, int number_of_test, int *successful) {
    std::cout << "Number of test #" << number_of_test <<'\n';
    if(expected == actual) 
        *successful++;
    else 
        std::cout << "FAILED\n";
}

void get_product_test() {
    int number_of_test = 1;
    int succuss = 0;
    {
        std::vector<int> vector {1, 0, 1, 0, 1, 1};
    }
}

int main() {
    std::vector<int> vector {1, 0, 1, 0, 1, 1};
    int length = vector.size();
    int counter = algorithm(vector, length);


    std::cout << counter << '\n';
    std::cout <<"vector size= " << vector.size();

    return 0;
}