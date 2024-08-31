#include <stdio.h>

#define SIZE 10

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void bubbleSort(int array[], int size) {
    int last = size - 1;
    int sorted = 0;

    for ( int i = 0; i < last && sorted == 0; i++ ) {
        int limit = size - i;

        sorted = 1;
        for ( int j = 0; j < limit; j++ ) {
            int next = j + 1;

            if ( array[j] > array[next] ) {
                int tmp = array[j];

                array[j] = array[next];
                array[next] = tmp;
                sorted = 0;
            }
        }
    }
}

int main() {
    int array[SIZE] = {1, 9, 10, 7, 5, 6, 4, 8, 3, 2};

    arrayPrint(array, SIZE);
    bubbleSort(array, SIZE);
    arrayPrint(array, SIZE);

    return 0;
}
