#include <stdio.h>

int strCmp(char str1[], char str2[]) {
    for ( int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++ ) {
        if ( str1[i] != str2[i] ) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str1[100];
    char str2[100];

    scanf("%99s", str1);
    scanf("%99s", str2);

    if ( strCmp(str1, str2) == 1 ) {
        printf("%s is equal to %s\n", str1, str2);
    } else {
        printf("%s is not equal to %s\n", str1, str2);
    }

    return 0;
}
