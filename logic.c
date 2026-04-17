#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if ( a > 0 && b > 0 ) {
        printf("%d is positive AND %d is positive\n", a, b);
    }

    if ( a > 0 || b > 0 ) {
        printf("%d is positive OR %d is positive\n", a, b);        
    }

    return 0;
}
