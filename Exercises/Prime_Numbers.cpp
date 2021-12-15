#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
auto Prime_numbers (int start_num, int num) -> std::string
{ auto out = std::ostringstream{};

        for (int i = start_num; i <= num; i++) {
            int check = true;
            for ( int j = 2; j <= sqrt(i); j++ ) {


                if (i % j == 0) {
                    check = false;

                }
            }
            if (check == true){
                out<< i <<" ";
            }

        }

    return out.str();
}
 auto main() -> int
 {
    std::cout << Prime_numbers( 2, 20)<<"\n";
    std::cout << Prime_numbers(2, 20);

    return 0;
}
