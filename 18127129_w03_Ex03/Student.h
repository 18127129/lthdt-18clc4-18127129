#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
	string first_name;
	string mid_name;
	string last_name;
public:
	string getFirstName();
	string getMidName();
	string getLastName();
	void setFirstName();
	void setMidName();
	void setLastName();
	string fullName();
	Student();
	Student(string last, string mid, string first);
	Student(string last, string first);
	Student(const Student& name);
	~Student();
};

