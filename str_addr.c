#include <stdio.h>

int strCmp(char a[], char b[]) {
    for ( int i = 0, j = 0; a[i] != '\0' || b[i] != '\0'; i++, j++ ) {
        if ( a[i] != b[i] ) {
            return 0;
        }
    }
    return 1;
}

int strCmpP(char* a, char* b) {
    for ( ; *a != '\0' || *b != '\0'; a++, b++ ) {
        if ( *a != *b ) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char alpha[10];
    char bravo[10];

    scanf("%9s", alpha); 
    scanf("%9s", bravo);

    if ( strCmpP(alpha, bravo) == 1 ) {
        printf("'%s' is equal to '%s'\n", alpha, bravo);
    } else {
        printf("'%s' is not equal to '%s'\n", alpha, bravo);
    }

    return 0;
}