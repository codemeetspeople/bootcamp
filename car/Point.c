#include <stdio.h>
#include <math.h>

#include "Point.h"

double distance(Point* a, Point* b) {
    return hypot(a->x + b->x, a->y + b->y);
}

void describePoint(Point* p) {
    printf("(%g, %g)\n", p->x, p->y);
}
