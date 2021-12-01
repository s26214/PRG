#include <iostream>
#include <string>
auto main(int argc, char* argv[]) -> int
{
    auto const x = std::stoi(argv[1]);

    if (argc != 2) {
        std::cout << "wpisz 1 liczbę"
                  << "\n";
        return 1;
    }
    for (int i = x; i >= 0; i--) {
        std::cout << i << "\n";
    }

    return 0;
}
