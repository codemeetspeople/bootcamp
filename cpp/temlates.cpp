#include <iostream>

template <typename TN>
TN sum(TN x, TN y) {
    return x + y;
}

int main() {
    std::cout << sum(10, 20) << std::endl;
    std::cout << sum(10.4, 0.18) << std::endl;
    std::cout << sum('A', ' ') << std::endl;
    std::cout << sum((long)10000000000, (long)10) << std::endl;

    return 0;
}