#include <iostream>
#include <string>
#include <vector>


auto is_palindrome(std::string text)  -> bool
{
    auto check = true;
    for (int i = 0; i <= text.size()/2 - 1; i++){
        if( text[i] == text[text.size()-1-i]){
            continue;
        }
        else{

            check = false;
            return check;
        }

    }

    return check;

}
auto filter_palindromes( const std::vector<std::string> vec) -> std::vector<std::string>
{
    auto filter =std::vector<std::string>{};
    for (int i = 0; i<= vec.size()-1 ;i++){
    if (is_palindrome(vec[i]) == true){
        filter.push_back(vec[i]);
        }

    }
    return filter;
}
auto main() -> int
{
auto vector = std::vector<std::string>{"otomoto","sample text","ratstar", "robot"};
    for (auto element : filter_palindromes(vector)) {
        std::cout << element << ' ';
    };

    return 0;
}
