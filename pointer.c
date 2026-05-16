#include <stdio.h>

void p_increment(int *value) {
    printf("value address: %p\n", value);
    *value += 1;
}

void increment(int value) {
    value += 1;
}

int main() {
    int x = 100;
    int y = 100;

    printf("x address: %p\n", &x);

    p_increment(&x);
    increment(y);

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
