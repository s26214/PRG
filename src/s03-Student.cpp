#include <iostream>
#include <string>
#include "../include/s42/Student.h"
int main () 
{
	
	auto student = s42::student("Kinga","Wajda","s26214","1","0");
	
	std::cout<<student.to_string;
	return 0;
}
