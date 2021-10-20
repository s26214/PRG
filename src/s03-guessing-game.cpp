#include <iostream>
auto main()->int
{
std::random_device rd;
std::uniform_int_distribution < int > d20 (1 , 20);
constexpr auto CRITICAL_SUCCESS = 20;
constexpr auto CRITICAL_FAILURE = 1;
auto const x = d20 ( rd );
if ( x == CRITICAL_SUCCESS ) {
std::cout << " you kill the monster in a single blow !\ n ";
} else if ( x == CRITICAL_FAILURE ) {
std::cout << " you wound yourself with your own sword !\ n ";
} else {
std::cout << " roll for damage .\ n ";
}
return 0;
}
