#include <stdio.h>

int var = 10;

void function() {
    printf("result: %d\n", var);
    printf("addr: %p\n", &var);
}

int main() {
    int var = 20;

    function();
    printf("result: %d\n", var);
    printf("addr: %p\n", &var);

    {
        int var = 30;

        printf("result: %d\n", var);
        printf("addr: %p\n", &var);
    }


    return 0;
}
