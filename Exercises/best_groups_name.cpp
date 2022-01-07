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

struct group{
    std::string group_name;
    std::vector<student> students;

    group(std::string g_n,std::vector<student> s_g){
        group_name = g_n;
        students = s_g;

    }



};

auto add_student(group& group, student student) -> void
{
    group.students.push_back(student);

}
auto average_of(student g)-> double
{
    double sum = 0;

    for (auto i = 0; i <= g.grades.size() -1;++i) {
        int  s_number = g.grades[i];
        sum += s_number;

    }

    return sum/g.grades.size();

}



auto get_best_student(std::vector<student> people) -> student {
    auto best_student = student("", "", {});
    auto max = 0;
    for (int i = 0; i < people.size() ; i++) {
        if (max < average_of(people[i]) ){
            best_student.name = people[i].name;
            best_student.surname = people[i].surname;
            best_student.grades = people[i].grades;
            max = average_of(people[i]);
        }
    }



    return best_student;

}
auto bubble_sort(std::vector<double>& vec) -> void {
    auto changes_were_made = true;
    for (auto j = 0; j < vec.size() && changes_were_made; j++) {
        changes_were_made = false;
        for (auto i = 0; i < vec.size() - 1; i++) {
            if (vec[i] > vec[i + 1]) {
                auto tmp = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = tmp;
                changes_were_made = true;
            }
        }
    }
}
auto best_groups_name(std::vector<group> groups) -> std::string
{
    auto best_group = group("", {});
    auto best_median = 0;
    for (int i = 0; i < groups.size() ; i++) {
        auto temp_sort = std::vector<double>{};
        for(int j = 0; j <groups[i].students.size() ;j++){
                 temp_sort.push_back(average_of(groups[i].students[j]));

        }
        bubble_sort(temp_sort);

        if((temp_sort.size() )% 2 == 0){
            if(best_median < (temp_sort[ (temp_sort.size())/2] + (temp_sort[ temp_sort.size()/2])-1)/2){
                best_group.group_name = groups[i].group_name;


                best_median = (temp_sort[ (temp_sort.size())/2] + (temp_sort[ temp_sort.size()/2])-1)/2;
            }

        }

        else{
            if(best_median < (temp_sort[ (temp_sort.size())/2 ] +1/2 ) ){
                best_group.group_name = groups[i].group_name;


                best_median = (temp_sort[ (temp_sort.size())/2 ] +1/2 );
            }

        }
       

    }
    return best_group.group_name;



}




auto main() -> int
{

    auto grades_j = std::vector<int>{1};
    auto grades_s = std::vector<int>{2};
    auto grades_d = std::vector<int>{3};
    auto grades_m = std::vector<int>{4};
    auto john = student("John","Smith",grades_j);
    auto steven = student("Steven","Bosh",grades_s);
    auto dani = student("Dani","Karlson",grades_d);
    std::cout<<"John : "<<average_of(john) << "\n";
    auto students = std::vector<student>{john,steven,dani};

    std::cout<< get_best_student (students).name<<"\n";
    auto group2002 = group("year 2002" ,students);

    auto mya = student("Mya","Dangerous",grades_m);
    add_student( group2002 , mya);
    std::cout<< get_best_student (group2002.students).name<<"\n";
    std::cout<<group2002.students.size();
    auto group2003 = group("year 2003",{dani,steven});
    auto group2004 = group("year 2004",students);
    auto group200x = group("year 200x", {mya});

    std::cout<< best_groups_name({group2002,group2004});
    return 0;
}
