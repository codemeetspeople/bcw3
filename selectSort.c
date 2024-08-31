#include <stdio.h>

#define SIZE 10

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}


void selectSort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int minIndex = i;
        int tmp = array[i];

        for ( int j = i + 1; j < size; j++ ) {
            if ( array[j] < array[minIndex] ) {
                minIndex = j;
            }
        }

        array[i] = array[minIndex];
        array[minIndex] = tmp;
    }
}



int main() {
    int array[SIZE] = {4, 9, 10, 7, 5, 6, 1, 8, 3, 2};

    arrayPrint(array, SIZE);
    selectSort(array, SIZE);
    arrayPrint(array, SIZE);

    return 0;
}

