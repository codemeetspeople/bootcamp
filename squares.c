#include <stdio.h>

void square(int limit) {
    for ( int i = 0; i < limit; i++ ) {
        for ( int j = 1; j < limit; j++ ) {
            printf("%d ", j);
        }
        printf("%d\n", limit);
    }
}

void pyramid(int limit) {
    for ( int i = 1; i <= limit; i++ ) {
        for ( int j = 1; j < i; j++ ) {
            printf("%d ", j);
        }
        printf("%d\n", i);
    }
}

int main() {
    int limit;

    scanf("%d", &limit);

    square(limit);
    printf("\n");
    pyramid(limit);

    return 0;
}
