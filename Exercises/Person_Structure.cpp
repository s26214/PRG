#include <iostream>
#include <string>
#include <sstream>
struct Person {

    std::string name;
    double weight;
    int height;
    Person(std::string n, double w, int h){
        name = n;
        weight = w;
        height = h;
    }



};



auto to_string (struct Person p)  -> std::string
{
    auto out = std::ostringstream{};
    out << "Name : " << p.name << "\n" << std::endl <<"Weight : "<< p.weight << " kg \n" << std::endl << "Height : "<< p.height << " cm ";
    return out.str();

};

 auto main() -> int
 {
auto person = Person("John K.",70, 180);
std::cout<< to_string(person);
    return 0;
}
