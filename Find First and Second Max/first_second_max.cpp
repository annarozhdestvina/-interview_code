#include <stdio.h>

void print_array(const int *array, int length) {
    for (int i=0; i<length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int get_product(const int* array, int length) {
    if (length < 2 )
        return -1;
    int first = array[0];
    int second = array[1];
    
    if (array[0] < array[1]) {
        first = array[1];
        second = array[0];
    }

    for (int i=2; i<length; i++) {
        if (array[i] > second) {
            if (array[i] <= first) {
                second = array[i];
                continue;
            }
            second = first;
            first = array[i];
        }
    }
    return first*second;
}

void test_case(const int *array, int length, int expected, int actual, int *success, int number_of_test) {
    printf("Number of test #%d\n", number_of_test);
    if (expected == actual) {
        print_array(array, length);
        printf ("expected = %d\nactual = %d\n", expected, actual);
        printf("Test: OK\n");
        *success +=1;
    } else {
        printf("FAILED\n");
        printf ("expected = %d\nactual = %d\n", expected, actual);
        print_array(array, length);
    }
    printf("\n\n");
}

void get_product_test () {
    int number_of_test =1;
    int success = 0;
    {
        const int array[] = {3, 4, 5, 0, 6};
        const int length = sizeof(array) / sizeof(array[0]);
        const int expected = 30;
        const int actual = get_product(array, length);
        test_case(array, length, expected, actual, &success, number_of_test);
    }
    number_of_test++;

    {
        const int array[] = {-3, 4, -5, 0, 6};
        const int length = sizeof(array) / sizeof(array[0]);
        const int expected = 24;
        const int actual = get_product(array, length);
        test_case(array, length, expected, actual, &success, number_of_test);
    }
    number_of_test++;

    {
        const int array[] = {0, 4, 5, 8, 0};
        const int length = sizeof(array) / sizeof(array[0]);
        const int expected = 40;
        const int actual = get_product(array, length);
        test_case(array, length, expected, actual, &success, number_of_test);
    }
    number_of_test++;

    {
        const int array[] = {3, 4};
        const int length = sizeof(array) / sizeof(array[0]);
        const int expected = 12;
        const int actual = get_product(array, length);
        test_case(array, length, expected, actual, &success, number_of_test);
    }
    number_of_test++;

    {
        const int array[] = {3};
        const int length = sizeof(array) / sizeof(array[0]);
        const int expected = -1;
        const int actual = get_product(array, length);
        test_case(array, length, expected, actual, &success, number_of_test);
    }
    
    number_of_test++;
    {
        const int array[] = {-3, -6, -7, 0, 9, 6, 2, 7, 0};
        const int length = sizeof(array) / sizeof(array[0]);
        const int expected = 63;
        const int actual = get_product(array, length);
        test_case(array, length, expected, actual, &success, number_of_test);
    }

    number_of_test++;
    {
        const int array[] = {0};
        const int length = sizeof(array) / sizeof(array[0]);
        const int expected = -1;
        const int actual = get_product(array, length);
        test_case(array, length, expected, actual, &success, number_of_test);
    }
    printf("---------------------------------\n");
    printf("Summory: \n");
    printf("Tests = \t\t%d\n", number_of_test);
    printf("successful tests =\t%d\n", success);
    printf("Persantage:   \t\t%1.2f%%\n", (float)success/number_of_test*100);
}



int main() {
    get_product_test();
    return 0;
}
