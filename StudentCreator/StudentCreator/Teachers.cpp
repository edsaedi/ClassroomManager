#include "Teachers.h"

Teachers::Teachers(int FirstName, int LastName, std::vector<Student>* Students)
{
	firstName = FirstName;
	lastName = LastName;
	students = Students;
}

void Teachers::ChangeGrade(std::string FirstName, std::string LastName, int Period, int Grade)
{
	for (auto i = students->begin(); i != students->end(); i++)
	{
		auto student = *i;

		if (student.firstName == FirstName && student.lastName == LastName &&
			student.periods.)
	}

}