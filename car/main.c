#include <stdio.h>

#include "Car.h"

int main() {
    Car vw = createCar("Porsche", "Maccan");

    describeCar(&vw);

    return 0;
}
