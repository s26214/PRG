#include <iostream>
#include <sstream>
auto is_even (int num)  -> bool
{
    auto check = false;
            if(num % 2 == 0 ){
            check =true;
            }
    std::cout<< num <<"\n";
    return check;
}


 auto main() -> int
 {

   if ( is_even(4) == 1){
       std::cout<<"Number is even";

   }
   else {
       std::cout<< "Number is odd";

   }


    return 0;
}
