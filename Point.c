#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

void printPoint(Point* p) {
    printf("(%g, %g)\n", p->x, p->y);
}

double distanceFromZero(Point* p) {
    return hypot(p->x, p->y);
}

double distance(Point* a, Point* b) {
    return hypot(a->x + b->x, a->y + b->y);
}

int main() {
    Point a = {1.0, 4.0};
    Point b = {2.0, 0.0};

    printf("%g\n", distanceFromZero(&a));
    printf("%g\n", distance(&a, &b));


    return 0;
}
