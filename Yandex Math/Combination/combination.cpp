#include <iostream>

int factorial(int n) {
    int r = 1;
    for (r; n > 1; r *= (n--));
    return r;
}


int main() {
    int n, k;
    std::cin >> n;
    std::cin >> k;

    int num = factorial(n);
    // std::cout << num;

    int den = factorial(k) * (factorial(n-k));

    int result = num / den;
    std::cout << result;

    return 0;
}