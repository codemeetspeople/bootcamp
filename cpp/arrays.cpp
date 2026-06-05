#include <iostream>

#define SIZE 5

void arrayScan(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        std::cin >> array[i];
    }
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        std::cout << array[i] << ' ';
    }
    std::cout << array[last] << std::endl;
}


int main() {
    int array[SIZE];

    arrayScan(array, SIZE);
    arrayPrint(array, SIZE);

    return 0;
}
