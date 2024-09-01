#include <iostream>

int main() {
    int x, y;
    bool isEqual = false;

    std::cin >> x >> y;

    if ( x == y ) {
        isEqual = true;
    }

    if ( isEqual ) {
        std::cout << x << " is equal to " << y << std::endl;
    } else {
        std::cout << x << " is not equal to " << y << std::endl;
    }

    return 0;
}
