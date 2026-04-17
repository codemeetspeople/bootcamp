#include <stdio.h>

int global = 1000;

int main() {
    int main_global = 2000;

    {
        int local = 5000;

        printf("global: %d\n", global);
        printf("main_global: %d\n", main_global);
        printf("local: %d\n", local);
    }

    return 0;
}
