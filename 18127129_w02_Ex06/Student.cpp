#include "Student.h"
string Student::FirstName()
{
	return firstName;
}
string Student::MidName()
{
	return midName;
}
string Student::LastName()
{
	return lastName;
}
void Student::setFirstName(string str)
{
	firstName = str;
}
void Student::setMidName(string str)
{
	midName = str;
}
void Student::setLastName(string str)
{
	lastName = str;
}
Student::Student()
{
	firstName = "A";
	midName = "Van";
	lastName = "Nguyen";
}
Student::Student(string last, string mid, string first)
{
	firstName = first;
	midName = mid;
	lastName = last;
}
Student::Student(const Student &str)
{
	firstName = str.firstName;
	midName = str.midName;
	lastName = str.lastName;
}
Student::~Student()
{
}
