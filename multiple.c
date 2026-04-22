#include <stdio.h>

int main() {
    int a, b;
    int multiple;

    scanf("%d %d", &a, &b);

    multiple = a;

    if ( multiple % b != 0 ) {
        multiple -= multiple % b;
    }

    printf("%d\n", multiple);


    return 0;
}
