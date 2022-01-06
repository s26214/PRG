#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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

auto get_best_student(std::vector<student> people) -> student {
    auto best_student = student("", "", {});
    auto max = 0;
    for (int i = 0; i < people.size(); i++) {
        if (max < average_of(people[i]) ){
            best_student.name = people[i].name;
            best_student.surname = people[i].surname;
            best_student.grades = people[i].grades;
            max = average_of(people[i]);
        }
    }



    return best_student;

}

auto main() -> int
{

    auto grades_j = std::vector<int>{6,1,1,1,1,1,1,1,1,1,1,6,6,6};
    auto grades_s = std::vector<int>{2,3,6,2,3,2,3,6,3};
    auto grades_d = std::vector<int>{1,1,1,1,1,1};
    auto john = student("John","Smith",grades_j);
    auto steven = student("Steven","Bosh",grades_s);
    auto dani = student("Dani","Karlson",grades_d);
    std::cout<<"John : "<<average_of(john) << "\n";
    auto students = std::vector<student>{john,steven,dani};
    std::cout<< get_best_student (students).name;
    return 0; 
}
