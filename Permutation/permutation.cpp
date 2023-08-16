#include <iostream>

int factorial(int n) {
    int result = 1;
    for(result; n > 1; result *= (n--));
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << factorial(n);
}