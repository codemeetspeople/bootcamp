#include <stdio.h>
#include "Car.h"

Car createCar(char* trademark, char* model) {
    Car c = {trademark, model, {0.0, 0.0}};
    return c;
}

void describeCar(Car* car) {
    printf(
        "%s %s: (%g, %g)\n",
        car->trademark,
        car->model,
        car->location.x,
        car->location.y
    );
}