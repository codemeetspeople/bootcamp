#include <stdio.h>

int getLen() {
    int len;

    scanf("%d", &len);
    return len;
}

void arrayScan(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        scanf("%d", &array[i]);
    }
}

int multiply(int x, int y) {
    return x * y;
}

int main() {
    int len = getLen();
    int array[len];
    int result;

    arrayScan(array, len);

    result = array[0];

    for ( int i = 1; i < len; i++ ) {
        result = multiply(result, array[i]);
    }
    printf("%d\n", result);

    return 0;
}
