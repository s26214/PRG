#include <s42/Time.h>
#include <iostream>
#include <string>



auto s42::Time::next_hour() ->void
{
	if (hour == 23 ){
	 hour = 0;
	}

	else{
	hour++;
}
}

auto s42::Time::next_minute() ->void
{
 if (min == 59 ){
         min = 0;
        }
        else{ 
        min++;
}
}
auto s42::Time::next_second () -> void
{
   if (sec == 59 ){
         sec = 0;
        }

        else{ 
        sec++;
}
}

s42::Time::Time(int h,int m,int s)
: hour{h}, min{m}, sec{s}
{}

auto s42::Time::to_string() const -> std::string
{
auto out = std::ostringstream{};

std::string space1;
std::string space2;
std::string space3;
if ( hour>10){
space1 ="";
}
else{
space1= "0";
}
if( min> 10){
space2="";
}
else{
space2 = "0";
}

if( sec> 10){
space3="";
}
else{
space3="0";
}
out<< "Time: "<< space1 << hour <<":" << space2 <<min<< ":"<<space3<< sec;
return out.str();

}


auto s42::Time::to_string (s42::Time::Time_of_day const t) -> std::string
{
switch (t){
case s42::Time::Time_of_day::Morning:
	return "Morning";
case s42::Time::Time_of_day::Afternoon:
        return "Afternoon";
case s42::Time::Time_of_day::Evening:
        return "Evening";
case s42::Time::Time_of_day::Night:
        return "Night";
default:
	return "What_time_of_day";

}



}


auto s42::Time::time_of_day() const -> Time_of_day
{

if (hour >= 5 && hour < 12  )

return s42::Time::Time_of_day::Morning;

else if (hour >= 12 && hour < 18 )

return s42::Time::Time_of_day::Afternoon;

else if (hour >= 18 && hour < 20 ) 
return s42::Time::Time_of_day::Evening;

else if (hour >= 20 && hour < 5)

return s42::Time::Time_of_day::Night;


}

auto main () -> int
{
auto time = s42::Time(13, 59, 58);
std::cout<< time.to_string() <<"\n";
time.next_hour();
time.next_minute();
time.next_second();
std::cout<<time.to_string()<<"\n";
std::cout<<time.to_string(time.time_of_day())<<"\n";

}
