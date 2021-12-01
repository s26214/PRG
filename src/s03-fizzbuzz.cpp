#include <iostream>
auto main() -> int
{
    int x;
    std::cin >> x;
    for (int i = 1; i <= x; ++i) {
        if ((i % 15) == 0) {
            std::cout << i << "Fizzbuzz!\n";
        } else if ((i % 3) == 0) {
            std::cout << i << "Fizz!\n";
        } else if ((i % 5) == 0) {
            std::cout << i << "Buzz!\n";
        } else {
            std::cout << i << "\n";
        }
    }
    return 0;
}
