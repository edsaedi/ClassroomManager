#pragma once
#include <istream>
#include <string>
#include <vector>
#include <algorithm>
#include "Student.h"
class Teachers
{
public:
	int firstName{};
	int lastName{};
	std::vector<Student>* students{};

	Teachers(int FirstName, int LastName, std::vector<Student>* Students);
	void ChangeGrade(std::string FirstName, std::string LastName, int Period, int Grade);
};

