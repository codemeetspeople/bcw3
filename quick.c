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
    int tmp = (start + end) / 2;
    int pivot = array[tmp];
    int tail = start;

    array[tmp] = array[end];
    array[end] = pivot;

    for ( ; array[tail] < array[end]; tail++ );
    for ( int i = tail + 1; i < end; i++ ) {
        if ( array[i] < array[end] ) {
            tmp = array[i];
            array[i] = array[tail];
            array[tail] = tmp;
            tail += 1;
        }
    }
    tmp = array[end];
    array[end] = array[tail];
    array[tail] = tmp;

    return tail;
}

void quickSort(int array[], int start, int end) {
    int pivot;

    if ( end - start < 1 ) {
        return;
    }
    
    pivot = partition(array, start, end);
    quickSort(array, start, pivot-1);
    quickSort(array, pivot+1, end);
}


int main() {
    int array[SIZE] = {1, 10, 3, 8, 9, 5, 12, 7, 1, 6, 4, 10, 5, 4, 1};
    
    arrayPrint(array, SIZE);
    quickSort(array, 0, SIZE-1);
    arrayPrint(array, SIZE);

    return 0;
}
