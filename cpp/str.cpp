#include <iostream>

int main() {
    std::string str = "Hello";
    std::string copy = str;

    str += ", ";
    str += "world!";

    std::cout << str << std::endl;
    std::cout << str.length() << std::endl;
    std::cout << str.substr(0, 5) << std::endl;
    std::cout << str[12] << std::endl;
    std::cout << copy << std::endl;

    return 0;
}
