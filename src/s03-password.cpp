#include <iostream>
#include <string>
std::string pas;
std::string com;
auto main(int argc , char * argv []) -> int
{
do{
std::cout<< argc;
std::cout<<"password:";
std::cin>>com;
}
while(com !=pas);
std::cout<<"welcome!";
return 0;
}
