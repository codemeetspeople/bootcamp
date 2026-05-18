#include <stdio.h>


int main() {
    FILE *in = fopen("string.in", "r");
    FILE *out = fopen("string.out", "w");
    char symbol;
    int offset = 'a' - 'A';

    for ( ; fscanf(in, "%c", &symbol) != -1; ) {
        if ( symbol >= 'a' && symbol <= 'z' ) {
            symbol -= offset;
        }
        fprintf(out, "%c", symbol);
    }

    fclose(in);
    fclose(out);

    return 0;
}
