#include <iostream>
#include <string>


auto compare (std::string first, std::string second)  -> void
{

    if ( first.size() > second.size()){
        std::cout << "Your first name is longer than your second one!";
    }
    else if ( first.size() < second.size()){
        std::cout << "Well your first name is not that long...";
    }
    else {
        std::cout << "They are both the same length.";
    }
}


 auto main() -> int
 {
     std::cout << "First name :";
     auto first_name = std::string{};
     std::getline(std::cin, first_name);
     std::cout << "Second name :";
     auto second_name = std::string{};
     std::getline(std::cin, second_name);
     compare(first_name,second_name);

    return 0;
}
