#include <stdio.h>

// {10, 12, 11, 13, 1, 3, 5, 7, 2, 4, 6, 8, 15, 16};

void merge(int array[], int lo, int mid, int hi) {
    int i = lo;
    int j = mid;
    int k = 0;
    int size = hi -lo;
    int tmp[size];

    for ( ; i < mid && j < hi; k++ ) {
        if ( array[i] < array[j] ) {
            tmp[k] = array[i];
            i += 1;
        } else {
            tmp[k] = array[j];
            j += 1;
        }
    }
    
    for ( ; i < mid; i++, k++ ) {
        tmp[k] = array[i];
    }

    for ( ; j < hi; j++, k++ ) {
        tmp[k] = array[j];
    }
    
    for ( int i = 0, j = lo; i < size; i++, j++ ) {
        array[j] = tmp[i];
    }
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}


int main() {
    int array[14] = {10, 12, 11, 13, 1, 3, 5, 7, 2, 4, 6, 8, 15, 16};

    arrayPrint(array, 14);
    merge(array, 4, 8, 12);
    arrayPrint(array, 14);
    merge(array, 0, 2, 4);
    arrayPrint(array, 14);
    merge(array, 0, 4, 14);
    arrayPrint(array, 14);

    return 0;
}
