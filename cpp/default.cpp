#include <iostream>

int increment(int value, int step = 1) {
    return value + step;
}

int main() {
    std::cout << increment(10) << std::endl;
    std::cout << increment(10, 2) << std::endl;
    return 0;
}
