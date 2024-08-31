#include <stdio.h>

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    int i = 0, j = 0, k = 0;

    for ( ; i < len1 && j < len2; ) {
        if ( src1[i] < src2[j] ) {
            target[k] = src1[i];
            i += 1;
            k += 1;
        } else {
            target[k] = src2[j];
            j += 1;
            k += 1;
        }
    }
    // ...
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
    const int len1 = 8;
    const int len2 = 10;
    const int len = len1 + len2;
    int src1[len1] = {1, 2, 2, 3, 3, 4, 5, 19};
    int src2[len2] = {3, 4, 5, 5, 6, 7, 9, 21, 23, 101};
    int target[len];

    arrayZeroFill(target, len);
    arrayMerge(target, src1, len1, src2, len2);
    arrayPrint(target, len);

    // {1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 6, 7, 9, 19, 21, 23, 101};
    return 0;
}
