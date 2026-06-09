// Портировать решение d4/arrayMax.c на C++
// Написать функцию arrayMax, которая вернёт максимальное значение из массива.
// Использовать std::cout вместо printf.

#include <iostream>

#define SIZE 5

int arrayMax(int array[], int size) {
    // Your code here
}

int main() {
    int array[SIZE] = {10, 78, 67, 8, 5};

    std::cout << arrayMax(array, SIZE) << std::endl; // 78

    return 0;
}
