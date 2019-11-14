#include "Teachers.h"

Teachers::Teachers(std::string FirstName, std::string LastName, std::vector<std::unique_ptr<Student>>* Students)
{
	firstName = FirstName;
	lastName = LastName;
	students = Students;
}

void Teachers::ChangeGrade(std::string FirstName, std::string LastName, int Period, int Grade)
{
	auto student = Find(FirstName, LastName);
	student->grades[Period] = Grade;
}

void Teachers::AddStudent(int Age, std::string FirstName, std::string LastName, int Period, int Grade)
{
	students->push_back(std::make_unique<Student>(Age, FirstName, LastName, Period, Grade, firstName));
}

bool Teachers::RemoveStudent(std::string FirstName, std::string LastName)
{
	auto student = Find(FirstName, LastName);
	//Finish this!!!!!
	students->erase(student);

	return false;
}

Student* Teachers::Find(std::string FirstName, std::string LastName)
{
	for (auto i = students->begin(); i != students->end(); i++)
	{
		auto student = i->get();
		if (student->firstName == FirstName && student->lastName == LastName)
		{
			return student;
		}
	}
	return nullptr;
}