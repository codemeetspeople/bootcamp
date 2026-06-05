#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

void pointPrint(Point* p) {
    printf("(%g, %g)\n", p->x, p->y);
}

double pointDistance(Point* a, Point* b) {
    return hypot(a->x+b->x, a->y+b->y);
}

int pointEqual(Point* a, Point *b) {
    return a->x == b->x && a->y == b->y;
}

int main() {
    Point x = {0, 2};
    Point y = {1, 4};

    if ( pointEqual(&x, &y) ) {
        printf("points are equal!\n");
    } else {
        printf("points are not equal!\n");
    }

    pointPrint(&x);
    pointPrint(&y);

    printf("distance: %g\n", pointDistance(&x, &y));

    return 0;
}
