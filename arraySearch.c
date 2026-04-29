#include <stdio.h>

int arraySearch(int array[], int size, int value) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] == value ) {
            return i;
        }
    }
    return -1;
}

int main() {
    int array[10] = {11, 29, 13, 74, 65, 96, 17, 28, 79, 100};

    printf("%d\n", arraySearch(array, 10, 9090));

    return 0;
}
