#include <iostream>
#include <string>
#include <sstream>
auto f_or_m ( int quantity )  -> std::string
{
    auto out = std::ostringstream();
    auto count_m = 0;
    auto count_f = 0;
    for(int i;i< quantity;i++) {

        std::cout << "name " << (i +1) ;
        auto name = std::string{};
        getline(std::cin, name);
        if( name[name.size()-1] == 'a'){
            ++count_f;
            out<< name;
        }
        else{

        ++count_m;
        out << name ;
        }

    }
    std::cout << "Female count:"<< count_f <<"\n";
    std::cout<< "Male count:"<<count_m <<"\n";
    return out.str();
}


 auto main() -> int
 {

   f_or_m(5);

    return 0;
}
