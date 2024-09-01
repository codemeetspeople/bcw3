#include <stdio.h>

#define SIZE 15

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

int partition(int array[], int start, int end) {
    int mid = (start + end) / 2;
    int index;

    // ...

    return index;
}


int main() {
    int array[SIZE] = {1, 10, 3, 8, 9, 5, 12, 7, 1, 6, 4, 10, 5, 4, 1};
    
    int result = partition(array, 0, 14); // 9


    // {1, 3, 5, 1, 6, 4, 5, 4, 1, 7, 10, 8, 9, 12, 10}
    
    return 0;
}
