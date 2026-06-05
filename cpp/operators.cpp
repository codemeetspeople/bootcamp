#include <iostream>

int main() {
    int x, y;

    std::cin >> x >> y;

    bool result = (x == y);

    std::cout << std::boolalpha;
    std::cout << result << std::endl;

    std::cout << x << " + " << y << " = " << x + y << std::endl;
    std::cout << x << " - " << y << " = " << x - y << std::endl;
    std::cout << x << " * " << y << " = " << x * y << std::endl;
    std::cout << x << " / " << y << " = " << x / y << std::endl;
    std::cout << x << " % " << y << " = " << x % y << std::endl;

    std::cout << x << " == " << y << " is " << (x == y) << std::endl;
    std::cout << x << " != " << y << " is " << (x != y) << std::endl;
    std::cout << x << " > " << y << " is " << (x > y) << std::endl;
    std::cout << x << " >= " << y << " is " << (x >= y) << std::endl;
    std::cout << x << " < " << y << " is " << (x < y) << std::endl;
    std::cout << x << " <= " << y << " is " << (x <= y) << std::endl;

    return 0;
}
