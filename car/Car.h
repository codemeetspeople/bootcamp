#include "Point.h"

typedef struct {
    char* trademark;
    char* model;
    Point location;
} Car;

Car createCar(char* trademark, char* model);
void describeCar(Car* car);