#ifndef S42_STUDENT_H
#define S42_STUDENT_H
#include <sstream>
#include <string>
namespace s42 {
struct Student {
    std::string name;
    std::string surname;
    std::string index;
    int semester;
    int average;
    Student(std::string, std::string, std::string, int, int);
    auto to_string() const -> std::string;
};
}  // namespace s42
#endif
