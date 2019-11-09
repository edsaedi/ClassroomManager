#include "Student.h"

Student::Student(int Age, std::string FirstName, std::string LastName, int Grade, std::string Cooperation, std::string WorkHabits, std::vector<std::string> Periods, std::vector<std::string> Teachers)
{
	age = Age;
	firstName = FirstName;
	lastName = LastName;
	grade = Grade;
	cooperation = Cooperation;
	workHabits = WorkHabits;
	periods = Periods;
	teachers = Teachers;
}