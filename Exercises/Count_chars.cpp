#include <iostream>
#include <sstream>

auto count_chars(std::string word, char letter) -> int
{
    auto num = 0;
    for (int i = 0; i < word.size() - 1 ; i++ ){
        if (word[i] == letter) {
        num++;
        }
    }
    return num;
}



 auto main() -> int
 {

    std::cout << count_chars("abrakadabra",'a');
    return 0;
}
