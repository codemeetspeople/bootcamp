#include <stdio.h>

int main() {
    char a; // symbol
    short b; // small numbers
    int c; // standart numbers
    float d;
    double e; // double precision
    long f; // long numbers

    printf("size of char - %lu bites\n", sizeof(a)*8);
    printf("size of short - %lu bites\n", sizeof(b)*8);
    printf("size of int - %lu bites\n", sizeof(c)*8);
    printf("size of float - %lu bites\n", sizeof(d)*8);
    printf("size of double - %lu bites\n", sizeof(e)*8);
    printf("size of long - %lu bites\n", sizeof(f)*8);

    return 0;
}
