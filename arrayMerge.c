#include <stdio.h>

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    int i = 0;
    int j = 0;
    int k = 0;

    for ( ; i < len1 && j < len2; k++ ) {
        if ( src1[i] < src2[j] ) {
            target[k] = src1[i];
            i += 1;
        } else {
            target[k] = src2[j];
            j += 1;
        }
    }
    
    for ( ; i < len1; i++, k++ ) {
        target[k] = src1[i];
    }

    for ( ; j < len2; j++, k++ ) {
        target[k] = src2[j];
    }
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void arrayZeroFill(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}


int main() {
    const int len1 = 10;
    const int len2 = 8;
    const int len = len1 + len2;
    int src1[len1] = {3, 4, 5, 5, 6, 7, 9, 21, 23, 101};
    int src2[len2] = {1, 2, 2, 3, 3, 4, 5, 19};
    int target[len];

    arrayMerge(target, src1, len1, src2, len2);
    arrayPrint(target, len);

    return 0;
}
