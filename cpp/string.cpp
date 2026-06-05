#include <iostream>

int main() {
    std::string str = "Hello";
    std::string str2 = "Hello";

    std::cout << str << std::endl;
    std::cout << str[0] << std::endl;
    std::cout << str.length() << std::endl;
    std::cout << str.substr(0, 5) << std::endl;

    if ( str == str2 ) {
        std::cout << str << " == " << str2 << std::endl;
    } else {
        std::cout << str << " != " << str2 << std::endl;
    }

    str2[1] = 'a';

    if ( str == str2 ) {
        std::cout << str << " == " << str2 << std::endl;
    } else {
        std::cout << str << " != " << str2 << std::endl;
    }

    return 0;
}
