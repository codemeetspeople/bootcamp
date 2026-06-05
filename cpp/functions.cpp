#include <iostream>

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

double sum(double a, double b) {
    return a + b;
}

int increment(int number, int tail = 1) {
    return number + tail;
}


int main() {
    std::cout << sum(10, 20) << std::endl;
    std::cout << sum(10, 20, 30) << std::endl;
    std::cout << sum(1.99, 20.76) << std::endl;
    std::cout << increment(100) << std::endl;
    std::cout << increment(100, 5) << std::endl;

    return 0;
}
