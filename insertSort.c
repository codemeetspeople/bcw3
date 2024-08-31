#include <stdio.h>

#define SIZE 10

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void insertSort(int array[], int size) {
    for ( int i = 1; i < size; i++ ) {
        int tmp = array[i];
        int j = i; 

        for ( int prev = j - 1; j > 0 && array[prev] > tmp; j--, prev-- ) {
            array[j] = array[prev];
        }
        array[j] = tmp;
    }
}


int main() {
    int array[SIZE] = {4, 9, 10, 7, 5, 6, 1, 8, 3, 2};

    arrayPrint(array, SIZE);
    insertSort(array, SIZE);    
    arrayPrint(array, SIZE);

    return 0;
}

