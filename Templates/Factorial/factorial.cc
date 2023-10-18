#include <iostream>

template<int N>
class Factorial {
public:
    static int get() {
        return N * Factorial<N-1>::get();
    }

    int operator()() {
        return get();
    }
};

template<>
class Factorial<1> {
public:
    static int get() {
        return 1;
    }
};

int main() {
    Factorial<3> fac;
    std::cout << fac();
}