// Портировать решение d6/structBookMax.c на C++ с использованием идиом C++:
//   - поле title должно быть std::string (а не char[])
//   - функция findLongest возвращает константную ссылку на Book с наибольшим количеством страниц
//   - перегрузить оператор << для вывода книги в std::ostream (формат: "title: pages")

#include <iostream>
#include <string>

#define SIZE 4

// typedef struct {
//     std::string title;
//     int pages;
// } Book;

// const Book& findLongest(const Book books[], int size) {
//     // Your code here
// }

// std::ostream& operator<<(std::ostream& out, const Book& b) {
//     // Your code here
// }

int main() {
    // Book shelf[SIZE] = {
    //     {"War and Peace", 1225},
    //     {"Hobbit", 310},
    //     {"Anna Karenina", 864},
    //     {"Crime and Punishment", 671}
    // };

    // std::cout << findLongest(shelf, SIZE) << std::endl; // War and Peace: 1225

    return 0;
}
