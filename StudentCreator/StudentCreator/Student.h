#pragma once
#include<iostream>
#include <vector>
#include <string>
class Student
{
	//Age
	//First Name
	//Last Name
	//Grade
	//Teachers
public:
	int age{};
	std::string firstName{};
	std::string lastName{};
	std::vector<std::string> grades{};
	std::vector<std::string> teachers{};
	Student(int Age, std::string FirstName, std::string LastName, std::vector<std::string> Grades, std::vector<std::string> Teachers);
	Student(int Age, std::string FirstName, std::string LastName, int Period, int Grade, std::string Teacher);
};

