
#ifndef S42_TIME_H
#define S42_TIME_H
#include <string>
#include <sstream>
namespace s42 {
struct Time {
int hour;
int min;
int sec;
Time(int,int,int);
auto to_string() const -> std::string;

auto next_hour() -> void;
auto next_minute() -> void;
auto next_second() -> void;


enum class Time_of_day
{
Morning,
Afternoon,
Evening, 
Night,
};

auto to_string (Time_of_day) -> std::string;
auto time_of_day() const -> Time_of_day;
};
}
#endif

