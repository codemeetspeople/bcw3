#include <stdio.h>

#define SIZE 10

int main() {
    int array[SIZE] = {1, 2, 3, 7, 5, 6, 7, 8, 9, 10};
    int index = -1;
    int target = 7;

    for ( int i = 0; i < SIZE; i++ ) {
        if ( array[i] == target ) {
            index = i;
            break;
        }
    }

    if ( index == -1 ) {
        printf("Element %d not found...\n", target);
    } else {
        printf("array[%d] = %d\n", index, array[index]);    
    }

    return 0;
}
