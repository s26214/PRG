#include <s42/Student.h>

#include <iostream>
#include <string>

s42::Student::Student(std::string n, std::string s, std::string q, int h, int i)
: name{std::move(n)}, surname{std::move(s)}, index{std::move(q)},semester{h},average{i}
{}

auto s42::Student::to_string() const ->std::string
{
auto out = std::ostringstream{};
out << "Student : "<< name <<" " << surname << " index : " << index << " semester : " << semester << " average : " << average;
return out.str();
}
int main()
{
    auto student = s42::Student("Kinga", "Wajda", "s26214", 1, 0);

    std::cout << student.to_string() <<"\n";
    return 0;
}
