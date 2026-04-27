#include <stdio.h>

int main() {
    const int size = 5;
    int array[size];

    for ( int i = 0; i < size; i++ ) {
        scanf("%d", &array[i]);
    }

    int last = size - 1;
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);

    return 0;
}
