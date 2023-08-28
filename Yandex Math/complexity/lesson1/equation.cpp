#include <iostream>
#include <cmath>

int main() {
    double a, b, c, d;
    double x1, x2;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    std::cout << a << b << c << '\n';

    if(a == 0) {
        if(b != 0) {
            std::cout << -c / b;
        }
        if(b == 0 && c == 0)
            std::cout << "Infinite number of solutions\n";
    }
    else
        d = b * b - 4 * a * c;
        double D = sqrt(d);
        std::cout << D;
        if(D == 0) {
            x1 = -b / (2 * a);
            std::cout << x1;
        } else if(D > 0) {
            x1 = (-b - sqrt (d)) / (2 * a);
            x2 = (-b + sqrt (d)) / (2 * a);
            if(x1 > x2)
                std::cout << x1 << ' ' << x2 << '\n';
                else 
                    std::cout << x2 << ' ' << x1 << '\n';
        }


    return 0;
}
/*
if a == 0:
if b != 0:
print (-c / b)
if b == 0 and c == 0:
print('Infinite number of solutions")
else:
d= b ** 2 - 4 * a * c
print(sart (d))
if d == OR
x1 = -b / (2 * a)
print (x1)
elif d > 0:
x1 = (-b - sqrt (d)) / (2 * a)
x2 = (-b + sqrt (d)) / (2 * a)
if x1 < ×2:
print (x1, ×2) else:
print (X2, ×1) */