#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
    std::string x;

    if (argv[1] == std::string("-n")) {
        for (int i = 2; i < argc; i++) {
            x = std::string(argv[i]);
            std::cout << x << " ";
        }

    } else if (argv[1] == std::string("-r")) {
        if (argv[2] == std::string("-l")) {
            for (int i = argc - 1; i > 2; i--) {
                x = std::string(argv[i]);
                std::cout << x << "\n";
            }

        } else if (argv[2] == std::string("-n")) {
            for (int i = argc - 1; i > 2; i--) {
                x = std::string(argv[i]);
                std::cout << x << " ";
            }
        } else {
            for (int i = argc - 1; i > 1; i--) {
                x = std::string(argv[i]);
                std::cout << x << " ";
            }
            std::cout << "\n";
        }
    } else if (argv[1] == std::string("-l")) {
        for (int i = 2; i < argc; i++) {
            x = std::string(argv[i]);
            std::cout << x << "\n";
        }
    } else {
        for (int i = 1; i < argc; i++) {
            x = std::string(argv[i]);
            std::cout << x << " ";
        }
        std::cout << "\n";
    }


    return 0;
}
