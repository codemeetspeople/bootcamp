#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    for ( ; i < 99; i++ ) {
        char symbol;

        scanf("%c", &symbol);

        if ( symbol == '\n' ) {
            break;
        }
        
        str[i] = symbol;
    }

    str[i] = '\0';

    printf("%s\n", str);

    return 0;
}
