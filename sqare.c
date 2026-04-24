#include <stdio.h>

int main() {
    int limit;

    scanf("%d", &limit);

    for ( int row = 0; row < limit; row++ ) { // rows
        for ( int col = 1; col < limit; col++ ) { // cols (row len)
            printf("%d ", col);
        }
        printf("%d\n", limit);
    }

    return 0;
}
