#include <stdio.h>

int main() {
    char str[10] = "Hello!";

    str[0] = 'G';
    str[2] = '9';

    printf("%s\n", str);

    return 0;
}
