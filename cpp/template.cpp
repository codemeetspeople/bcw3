#include <iostream>

template <typename T>
T sum(T x, T y) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return x + y;
}

template <typename T, typename P>
T sum(T x, P y) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return x + y;
}

char sum(char x, int y) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return x + y;
}


int main() {
    std::cout << sum(10, 50) << std::endl;
    std::cout << sum(1.98, 2.56) << std::endl;
    std::cout << sum('A', ' ') << std::endl;
    std::cout << sum<int, int>('A', ' ') << std::endl;

    std::cout << sum(1, 5.908) << std::endl;
    std::cout << sum(5.54, 5) << std::endl;
    std::cout << sum('A', 32) << std::endl;
    std::cout << sum<char, int>('A', 32) << std::endl;

    return 0;
}
