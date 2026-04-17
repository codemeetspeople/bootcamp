#include <stdio.h>

int main() {
    int x;
    int balance = 100;

    printf("Current balance: %d\n", balance);

    scanf("%d", &x);

    if ( x <= 0 ) {
        printf("Invalid argument: %d!\n", x);
        return 0;
    }

    if ( x > balance ) {
        printf("Illegal operation. Not enough credits!\n");
        return 0;
    }

    balance -= x;
    printf("Current balance: %d\n", balance);

    return 0;
}
