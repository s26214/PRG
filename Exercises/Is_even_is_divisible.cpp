#include <iostream>
#include <sstream>

auto is_divisible (int dividend, int divisor) -> bool {
    auto check = false;
    if(dividend % divisor == 0 ){
        check =true;
    }
    return check ;
}

auto is_even (int num)  -> bool
{
    auto check = false;
            if(is_divisible(num,2) == 1 ){
            check =true;
            }
    std::cout<< num <<"\n";
    return check;

}


 auto main() -> int
 {

   if ( is_even(1) == 1){
       std::cout<<"Number is even";

   }
   else {
       std::cout<< "Number is odd";

   }



    return 0;
}
