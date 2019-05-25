#include <iostream>
#include <string>
using namespace std;
class Student
{
	string firstName;
	string midName;
	string lastName;
public:
	string FirstName();
	string MidName();
	string LastName();
	void setFirstName(string str);
	void setMidName(string str);
	void setLastName(string str);
public:
	Student();
	Student(string, string, string);
	Student(const Student &str);
	~Student();
};

