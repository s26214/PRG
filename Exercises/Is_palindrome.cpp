#include <iostream>
#include <string>



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

auto main() -> int
{
    std::cout << "Palindrome check \ntype your word here :";
    auto text = std::string{};
    getline(std::cin,text);
    if( is_palindrome(text) == 1){

        std::cout<< "It's a palindrome! Woohoo!";
    }
    else{
        std::cout<< "It's not a palindrome...";

    }


    return 0;
}
