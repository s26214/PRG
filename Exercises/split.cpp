#include <iostream>
#include <vector>
#include <string>
auto split(std::string string) -> std::vector<std::string>
{

    auto vec = std::vector<std::string>{};
    std::string word = "";
    string += " ";
    for (auto element : string)
    {
        if (element == ' ')
        {
            vec.push_back(word);
            word = "";
        }
        else {
            word = word + element;
        }
    }
    return vec;
}
int main() {

    for (auto element : split("ala ma kota")) {
        std::cout << element << ',';
    }
}
