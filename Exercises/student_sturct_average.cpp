#include <iostream>
#include <string>
#include <vector>
struct student{
    std::string name;
    std::string surname;
    std::vector<int> grades;
    student(std::string n,std::string s, std::vector<int> g){
        name = n;
        surname = s;
        grades = g;
    }
};
auto average_of(student g)-> double
{
    double sum = 0;

    for (auto i = 0; i <= g.grades.size() - 1;++i) {
        int  s_number = g.grades[i];
        sum += s_number;

    }

    return sum/g.grades.size();

}
auto main() -> int
{
    auto grades = std::vector<int>{1,2,3,4,5,6};
    auto john = student("John","Smith",grades);
    std::cout<< average_of(john);
    return 0;
}
