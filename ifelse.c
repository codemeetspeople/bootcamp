#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    if ( x % 2 == 0 ) {
        printf("%d is even!\n", x);
    } else {
        printf("%d is odd!\n", x);
    }

    if ( x % 5 == 0 ) {
        printf("%d is multiple to 5!\n", x);
    }

    if ( x < 0 ) {
        printf("%d is negative!\n", x);
    } else if ( x > 0) {
        printf("%d is positive!\n", x);
    } else {
        printf("%d is zero!\n", x);
    }

    return 0;
}
