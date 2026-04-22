#include <stdio.h>

int main() {
    char symbol;

    scanf("%c", &symbol);

    if ( symbol >= 'a' && symbol <= 'z' || symbol >= 'A' && symbol <= 'Z' ) {
        printf("Yep, it's letter...\n");
    } else {
        printf("Nope, it's not letter...\n");
    }

    return 0;
}
