// Портировать решение d6/structRect.c на C++ с использованием идиом C++:
//   - функции принимают Rectangle по ссылке (const& для чтения, & для изменения)
//   - перегрузить оператор << для вывода прямоугольника в std::ostream
//   - перегрузить оператор == для сравнения двух прямоугольников

#include <iostream>

// typedef struct { ... } Rectangle;

// double area(const Rectangle& r);
// double perimeter(const Rectangle& r);
// void scale(Rectangle& r, double factor);
// bool operator==(const Rectangle& a, const Rectangle& b);
// std::ostream& operator<<(std::ostream& out, const Rectangle& r);

int main() {
    // Rectangle r = {3.0, 4.0};

    // std::cout << area(r) << std::endl;      // 12
    // std::cout << perimeter(r) << std::endl; // 14

    // scale(r, 2.0);
    // std::cout << area(r) << std::endl;      // 48
    // std::cout << r << std::endl;            // (6, 8)

    return 0;
}
