#include <stdio.h>
#include "arrays.h"

#define SIZE 10

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    arrayPrint(array, SIZE);

    printf("%d\n", arraySum(array, SIZE));

    return 0;
}
