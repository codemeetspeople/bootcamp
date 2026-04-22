#include <stdio.h>

int main() {
    int limit;
    int last;

    scanf("%d", &limit);

    last = limit - 1;
    for ( int i = 0; i < last; i++ ) {
        printf("%d_", i);
    }
    printf("%d\n", last);

    return 0;
}
