#include <iostream>
#include <cmath>

int main() {
    double a, b, c, d;
    double x1, x2;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if(a == 0) {
        if(b != 0) {
            std::cout << -c / b;
        }
        if (b == 0 && c != 0) {
            std::cout << "no solution\n";
        }
        if(b == 0 && c == 0)
            std::cout << "Infinite number of solutions\n";
    } else {
        d = b * b - 4 * a * c;

        if(d == 0.0) {
            x1 = -b / (2 * a);
            std::cout << x1;
        } else if   (d > 0) {
                x1 = (-b - sqrt(d)) / (2 * a);
                x2 = (-b + sqrt(d)) / (2 * a);
                if(x1 < x2) {
                    std::cout << x1 << ' ' << x2 << '\n';
                } else 
                    std::cout << x2 << ' ' << x1 << '\n';
        } else if( d < 0) {
        std::cout << "det is < 0\n";
        }
    }

    return 0;
}