#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if ( a == b ) {
        printf("%d is equal to %d\n", a, b);
    } else {
        printf("%d is not equal to %d\n", a, b);
    }

    return 0;
}
