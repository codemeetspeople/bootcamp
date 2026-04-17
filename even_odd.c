#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    if ( x == 0 ) {
        printf("%d is zero!\n", x);
    } else if ( x%2 == 0 ) {
        printf("%d is odd!\n", x);

        if ( x > 0 ) {
            printf("%d is positive!\n", x);
        } else {
            printf("%d is negative!\n", x);
        }
    } else {
        printf("%d is even!\n", x);

        if ( x > 0 ) {
            printf("%d is positive!\n", x);
        } else {
            printf("%d is negative!\n", x);
        }
    }


    return 0;
}
