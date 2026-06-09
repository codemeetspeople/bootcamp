// Портировать решение d6/structPoint.c на C++ с использованием идиом C++:
//   - typedef struct { ... } Point;
//   - функции принимают const Point& (а не указатель)
//   - перегрузить оператор << для вывода точки в std::ostream
//   - написать функцию distance, возвращающую расстояние от точки до (0, 0)

#include <iostream>

// typedef struct { ... } Point;

// std::ostream& operator<<(std::ostream& out, const Point& p) {
//     // Your code here
// }

// double distance(const Point& p) {
//     // Your code here
// }

int main() {
    // Point a = {3.0, 4.0};
    // Point b = {0.0, 0.0};

    // std::cout << a << std::endl;        // (3, 4)
    // std::cout << distance(a) << std::endl; // 5
    // std::cout << distance(b) << std::endl; // 0

    return 0;
}
