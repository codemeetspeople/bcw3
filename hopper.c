#include <stdio.h>

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

int main() {
    int array[100];
    int maxJump = 5, cell = 10;

    for ( int i = 0; i < maxJump; i++ ) {
        array[i] = 1 << i;
    }

    for ( int i = maxJump; i < cell; i++ ) {
        
    }

    return 0;
}