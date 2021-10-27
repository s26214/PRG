#include <iostream>
#include <random>
auto main()->int
{
std::random_device rd;
std::uniform_int_distribution < int > num (1 , 100);
auto const x = num ( rd );
int y;
do{
 if(y == 69){
std::cout<<"nice\n";
std::cin>>y;
}
if(y > x) {
std::cout<<"too big!\n";
std::cin>>y;
} else if(y < x) 
{
std::cout<<" Too small! \n";
std::cin>>y;
}

}while(y!=x);
std::cout <<"Bingo!\n";
return 0;
}
