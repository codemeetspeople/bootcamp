#include <stdio.h>

int main() {
    int limit;

    scanf("%d", &limit);

    for ( int row = 1; row <= limit; row++ ) {
        for ( int col = 1; col < row; col++ ) {
            printf("%d ", col);
        }
        printf("%d\n", row);
    }

    return 0;
}
