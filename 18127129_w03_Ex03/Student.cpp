#include "Student.h"
string Student::fullName()
{
	if (mid_name == "")
		return last_name + " " + first_name;
	return last_name + " " + mid_name + " " + first_name;
}
string Student::getFirstName()
{
	return first_name;
}
string Student::getMidName()
{
	return mid_name;
}
string Student::getLastName()
{
	return last_name;
}
void Student::setFirstName()
{
	getline(cin, first_name);
}
void Student::setMidName()
{
	getline(cin, mid_name);
}
void Student::setLastName()
{
	getline(cin, last_name);
}
Student::Student()
{
	last_name = "Nguyen";
	mid_name = "Van";
	first_name = "A";
}
Student::Student(string last, string mid, string first)
{
	first_name = first;
	mid_name = mid;
	last_name = last;
}
Student::Student(string last, string first)
{
	first_name = first;
	mid_name = "";
	last_name = last;
}
Student::Student(const Student& name)
{
	first_name = name.first_name;
	mid_name = name.mid_name;
	last_name = name.last_name;
}
Student::~Student()
{
}
