#include <stdio.h>

int main() {
    int x = 10;
    int* pointer = &x;

    *pointer += 1;

    printf("%d\n", x);

    return 0;
}
