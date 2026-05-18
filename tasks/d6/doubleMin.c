// Написать функцию arrayMin, которая вернет минимальное значение из массива вещественных чисел

#include <stdio.h>

#define SIZE 5

double arrayMin(double array[], int size) {
    // Your code here
}

int main() {
    double array[SIZE] = {3.14, 2.71, 1.41, 0.57, 1.61};

    printf("%.2f\n", arrayMin(array, SIZE)); // 0.57

    return 0;
}
