#include "Student.h"

Student::Student(int Age, std::string FirstName, std::string LastName, std::vector<std::string> Grades, std::vector<std::string> Teachers)
{
	age = Age;
	firstName = FirstName;
	lastName = LastName;
	grades = Grades;
	teachers = Teachers;
}

Student::Student(int Age, std::string FirstName, std::string LastName, int Period, int Grade, std::string Teacher)
{
	age = Age;
	firstName = FirstName;
	grades[Period] = Grade;
	teachers[Period] = Teacher;
}