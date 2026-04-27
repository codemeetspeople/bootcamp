#include <stdio.h>

int sum(int x, int y) {
    return x + y;
}

int diff(int x, int y) {
    return x - y;
}

int increment(int x) {
    x += 1;
    return x;
}

void hello() {
    printf("Hello!\n");
}


int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    hello();

    printf("%d\n", sum(a, b));
    printf("%d\n", diff(a, b));
    printf("%d\n", increment(a));

    hello();

    return 0;
}
