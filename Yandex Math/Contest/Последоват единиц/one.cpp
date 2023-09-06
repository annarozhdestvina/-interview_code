//5         output : 
// 0                1
// 1
// 0
// 1
// 0

//      1, 0, 1, 1, 1, 1, 1, 0, 1, 1
#include <iostream>
#include <vector>

int algorithm(std::vector<int> &arr, int length) {  // а почему на массив делали указатель?
    int counter = 0;
    int copy = 0;
    for(int i = 0; i < length; i++) {
        if(arr[i] == 1) {
            counter++;
        }
        else {
            if(copy < counter) 
                copy = counter;
            counter = 0;
        }
    }
    return (copy > counter) ? copy : counter;
}

void test_case(std::vector<int> &arr, int length, int expected, int actual, int number_of_test, int *successful) {
    std::cout << "Number of test #" << number_of_test <<'\n';
    if(expected == actual) {
        *successful +=1;
        std::cout << expected  << "==" << actual<< '\n';
    }
    else {
        std::cout << "FAILED\n";
        std::cout << expected  << "==" << actual<< '\n';
    }
}

void get_product_test() {
    int number_of_test = 1;
    int succuss = 0;
    {
        std::vector<int> vector {1, 0, 1, 0, 1, 1};
        int length = vector.size(); 
        int expected = 2;
        int actual = algorithm(vector, length);
        test_case(vector, length, expected, actual, number_of_test, &succuss);
    }
    number_of_test++;
    {
        std::vector<int> vector {1, 0, 1, 0, 1, 1, 1};
        int length = vector.size(); 
        int expected = 3;
        int actual = algorithm(vector, length);
        test_case(vector, length, expected, actual, number_of_test, &succuss);
    }
    number_of_test++;
    {
        std::vector<int> vector {1, 0, 1, 1, 1, 1, 1, 0, 1, 1};
        int length = vector.size(); 
        int expected = 5;
        int actual = algorithm(vector, length);
        test_case(vector, length, expected, actual, number_of_test, &succuss);
    }
    number_of_test++;

    {
        std::vector<int> vector {1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1};
        int length = vector.size(); 
        int expected = 4;
        int actual = algorithm(vector, length);
        test_case(vector, length, expected, actual, number_of_test, &succuss);
    }
    number_of_test++;
}

int main() {
    get_product_test();
    // std::vector<int> vector {1, 0, 1, 0, 1, 1};
    // int length = vector.size();
    // int counter = algorithm(vector, length);


    // std::cout << counter << '\n';
    // std::cout <<"vector size= " << vector.size();

    return 0;
}