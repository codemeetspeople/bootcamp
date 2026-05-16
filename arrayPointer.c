#include <stdio.h>

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void arrayPrintP(int* array, int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", *(array+i));
    }
    printf("%d\n", *(array+last));
}

int main() {
    int array[5] = {10, 20, 30, 40, 50};

    arrayPrint(array, 5);
    arrayPrintP(array, 5);

    return 0;
}
