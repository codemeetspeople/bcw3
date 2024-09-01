#include <iostream>

int main() {
    int x;
    double y;

    std::cin >> x >> y;

    std::cout << "Value: " << x << ", address: " << &x << std::endl;    
    std::cout << "Value: " << y << ", address: " << &y << std::endl;
    
    return 0;
}
