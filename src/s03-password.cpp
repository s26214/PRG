#include <iostream>
#include <string>

auto main(int, char* argv[]) -> int
{
    auto const con = std::string{argv[1]};
    std::string S;
    do {
        std::cout << "password:";
        std::cin >> S;
    } while (S != con);
    std::cout << "welcome!\n";
    return 0;
}
