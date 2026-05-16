#include <stdio.h>

void arrayFill(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}

void arrayScan(FILE* in, int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int tmp;

        if ( fscanf(in, "%d", &tmp) != 1 ) {
            return;
        }

        array[i] = tmp;
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
    int array[10];
    FILE* in = fopen("read.in", "r");

    arrayFill(array, 10);

    arrayScan(in, array, 10);
    fclose(in);

    arrayPrint(array, 10);

    return 0;
}
