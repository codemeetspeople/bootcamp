#include <stdio.h>

int getSize(FILE *in) {
    int size;

    fscanf(in, "%d", &size);
    return size;
}

void arrayScan(FILE *in, int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
}

void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int main() {
    FILE *in = fopen("file.in", "r");
    FILE *out = fopen("file.out", "w");
    int size = getSize(in);
    int array[size];

    arrayScan(in, array, size);
    fclose(in);

    arrayPrint(out, array, size);
    fclose(out);

    return 0;
}
