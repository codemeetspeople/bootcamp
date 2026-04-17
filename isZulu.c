#include <stdio.h>

int main() {
    int a;
    int zulu = 1;

    scanf("%d", &a);

    if ( a%2 == 0 ) {
        printf("alpha\n");
        zulu = 0;
    }

    if ( a%5 == 0 ) {
        printf("bravo\n");
        zulu = 0;
    }

    if ( zulu == 1 ) {
        printf("zulu\n");
    }

    return 0;
}
