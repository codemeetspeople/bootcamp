#include <stdio.h>

int main() {
    int limit;

    scanf("%d", &limit);

    for ( int col = 1; col < limit; col++ ) {
        printf("%d ", col);
    }
    printf("%d\n", limit);
    

    return 0;
}