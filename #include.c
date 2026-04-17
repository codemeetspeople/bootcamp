#include <stdio.h>

int main() {
    int x;
    int balance = 100;

    scanf("%d", &x);

    if ( x > balance ) {
        printf("Illegal operation. Not enough credits!\n");
        return 0;
    }

    balance -= x;
    printf("Current balance: %d\n", balance);

    return 0;
}
