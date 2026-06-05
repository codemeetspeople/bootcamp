#include <iostream>

#define SIZE 10

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        std::cout << array[i] << ' ';
    }
    std::cout << array[last] << std::endl;
}

int main() {
    int array[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    arrayPrint(array, SIZE);

    return 0;
}
