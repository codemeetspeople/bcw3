#include <iostream>

int sum(int x, int y) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return x + y;
}

double sum(double x, double y) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return x + y;
}

char sum(char x, char y) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return x + y;
}


int main() {
    std::cout << sum(10, 50) << std::endl;
    std::cout << sum(1.219, 5.5) << std::endl;
    std::cout << sum('A', ' ') << std::endl;

    return 0;
}
