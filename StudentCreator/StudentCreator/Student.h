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
	//Cooperation
	//Work Habits
	//Periods
	//Teachers
public:
	int age{};
	std::string firstName{};
	std::string lastName{};
	int grade{};
	std::string cooperation{};
	std::string workHabits{};
	std::vector<std::string> periods{};
	std::vector<std::string> teachers{};
	Student(int Age, std::string FirstName, std::string LastName, int Grade, std::string Cooperation, std::string WorkHabits, std::vector<std::string> Periods, std::vector<std::string> Teachers);


};

