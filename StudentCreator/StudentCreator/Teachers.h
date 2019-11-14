#pragma once
#include <istream>
#include <string>
#include <vector>
#include <algorithm>
#include "Student.h"
#include <memory>
class Teachers
{
public:
	std::string firstName{};
	std::string lastName{};
	std::vector<std::unique_ptr<Student>>* students{};

	Teachers(std::string FirstName, std::string LastName, std::vector<std::unique_ptr<Student>>* Students);
	void ChangeGrade(std::string FirstName, std::string LastName, int Period, int Grade);
	void AddStudent(int Age, std::string FirstName, std::string LastName, int Period, int Grade);
	bool RemoveStudent(std::string FirstName, std::string LastName);
	Student* Find(std::string FirstName, std::string LastName);
};

