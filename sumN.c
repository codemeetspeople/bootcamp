#include <stdio.h>

int main() {
    int limit;
    int result = 0;

    scanf("%d", &limit);

    for ( int i = 0; i < limit; i++ ) {
        int number;

        scanf("%d", &number);

        result += number;
    }

    printf("%d\n", result);
    
    return 0;
}
