#include <stdio.h>

#define SIZE 10

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for ( int i = 0; i < SIZE; i++ ) {
        if ( array[i] <= 5 ) {
            continue;
        }
        printf("%d\n", array[i]);
    }

    return 0;
}
