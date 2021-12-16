#include <iostream>
#include <string>
#include <sstream>
auto n_num (std::string word, int place) -> std::string  {
    auto out = std::ostringstream{};
    if (place - 1 >= word.size()) {

        auto wrong = std::string{"Your letter is out of the range of the number of letters in the word. Try again \n"};
        return wrong;

    } else {

    for (int i= place-1; i < word.size(); i += place ) {
        out<< word[i];

    }
        return out.str();
    }
}



 auto main( ) -> int
 {
    auto word = std::string{};
    std::cout<< "Type word :";
    getline(std::cin,word);
    std::cout<<"\n";
    auto number = int{};
    std::cout<< "number of position :";
    std::cin >> number ;

   std::cout << n_num( word, number);
    return 0;
}
