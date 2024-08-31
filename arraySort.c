#include <stdio.h>

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}


int main() {
    const int size = 7;
    int array[size] = {5, 7, 4, 3, 6, 1, 2};

    arrayPrint(array, size);

    int last = size - 1;
    for ( int i = 0; i < last; i++ ) {
        int next = i + 1;

        if ( array[i] > array[next] ) {
            int tmp = array[i];

            array[i] = array[next];
            array[next] = tmp;
        }
    }

    arrayPrint(array, size);

    
    return 0;
}




