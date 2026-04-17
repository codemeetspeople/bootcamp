#include <stdio.h>

int main() {
    // variables definition
    int a, b;

    // varibales initialization
    scanf("%d %d", &a, &b);

    if ( a > b ) {
        // a is greater than b
        printf("%d\n", a);
    } else {
        // b is greater than a
        printf("%d\n", b);
    }

    return 0;
}
