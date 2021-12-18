#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
auto top_and_bottom_frame (int max) -> std::string
{
    if (max % 2 ==0) {
        for (int i = 0; i <= max + 5; i++) {
            std::cout << "*";
        }
    } else{
        for (int i = 0; i <= max + 3; i++) {
            std::cout << "*";
        }
    }
    return "";
}
auto center_word(int max, std::string word) -> std::string
{
    if(max % 2 == 0) {

        if (word.size() == 0) {

            std::cout << "\n*";
            for (int j = 0; j <= max + 3; j++) {
                std::cout << " ";
            }
            std::cout << "*\n";


        } else if (word.size() % 2 == 0) {
            std::cout << "\n*";
            for (int j = 0; j <= (max +2  - word.size())/ 2; j++) {
                std::cout << " ";
            }
            std::cout << word;
            for (int j = 0; j <= ((max+2 - word.size()) ) / 2; j++) {
                std::cout << " ";
            }
            std::cout << "*\n";
            return "";
        } else {
            std::cout << "\n*";
            for (int j = 0; j <= (max + 1 - word.size()) / 2; j++) {
                std::cout << " ";
            }
            std::cout << word;
            for (int j = 0; j <= (max + 1 - word.size()) / 2; j++) {
                std::cout << " ";
            }
            std::cout << " ";
            std::cout << "*\n";

        }
    }else {
        if (word.size() == 0) {
            {
                std::cout << "\n*";
                for (int j = 0; j <= max + 2; j++) {
                    std::cout << " ";
                }
                std::cout << "*\n";
            }

        } else if (word.size() % 2 == 0 ){
            std::cout << "\n*";
            for (int j = 0; j <= (max - word.size()) / 2; j++) {
                std::cout << " ";
            }
            std::cout << word;
            for (int j = 0; j <= ((max - word.size())+2)/ 2; j++) {
                std::cout << " ";
            }
            std::cout << "*\n";
            return "";
        }
        else {
            std::cout << "\n*";
            for (int j = 0; j <= (max + 1 - word.size()) / 2; j++) {
                std::cout << " ";
            }
            std::cout << word;
            for (int j = 0; j <= (max + 1 - word.size()) / 2; j++) {
                std::cout << " ";
            }
            std::cout << "*\n";

        }
    }
    return "";
}

auto box_print (std::string one,std::string two,std::string three,std::string four,std::string five)  -> std::string
{
    auto box = std::ostringstream{};
    auto max = std::max({one.size(), two.size(),three.size(),four.size(),five.size()});
    top_and_bottom_frame(max);
    box<< "\n";
    box << center_word(max, one);
    box << center_word(max, two);
    box << center_word(max, three);
    box << center_word(max, four);
    box << center_word(max, five);
    top_and_bottom_frame ( max);
    box<< "\n";
    return box.str();
}

auto main() -> int
{

    std::cout<<box_print("Hello","world","in","a","frame");

    return 0;
}
