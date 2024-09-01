#include <iostream>

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        std::cout << array[i] << " ";
    }
    std::cout << array[last] << std::endl;
}

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    arrayPrint(array, 10);

    return 0;
}