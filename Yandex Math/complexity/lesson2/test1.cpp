#include <iostream>

int findx(int *array, int length, int x) {
    int answer = -1;
    for(int i = 0; i < length; i++) {
        if(answer == -1 && array[i] == x)
            answer = i;
    }
    return answer;
}

int main()
{
    int n;
    std::cout << "input n: ";
    std::cin >> n;
    
    int *array = new int[n];
    
    for(int i = 0; i< n; i++)
        std::cin >> array[i];
    
    for(int i = 0; i< n; i++) 
        std::cout << *(array + i) << ' ';
    std::cout << '\n';    
    int a = findx(array, n, 3);
    std::cout << a;

    return 0;
}