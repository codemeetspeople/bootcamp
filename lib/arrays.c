#include <stdio.h>
#include "arrays.h"

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

int arraySum(int array[], int size) {
    int result = array[0];

    for ( int i = 1; i < size; i++ ) {
        result += array[i];
    }

    return result;
}
