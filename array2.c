#include <stdio.h>

#define SIZE 5

void arrayScan(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        scanf("%d", &array[i]);
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
    int array[SIZE];

    arrayScan(array, SIZE);
    arrayPrint(array, SIZE);

    return 0;
}
