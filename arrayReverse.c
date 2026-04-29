#include <stdio.h>

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void arrayReverse(int array[], int size) {
    int limit = size / 2;
    int tmp;

    for ( int i = 0, j = size - 1; i < limit; i++, j-- ) {
        tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
    }
}

int main() {
    int array[9] = {1, -2, 3, -4, 5, -6, 7, -8, 9};

    arrayPrint(array, 9);
    arrayReverse(array, 9);
    arrayPrint(array, 9);

    return 0;
}
