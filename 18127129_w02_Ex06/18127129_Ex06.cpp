#include "Student.h"
int main()
{
	Student sv, sv2("Ho", "Tuan", "Quang"), sv3(sv2);
	cout << "Student1: " << sv.LastName() << " " << sv.MidName() << " " << sv.FirstName() << endl;
	cout << "Student2: " << sv2.LastName() << " " << sv2.MidName() << " " << sv2.FirstName() << endl;
	cout << "Student3: " << sv3.LastName() << " " << sv3.MidName() << " " << sv3.FirstName() << endl;
	cout << "change student name: " << endl;
	string str;
	cout << "Last name: ";
	getline(cin, str);
	sv2.setLastName(str);
	cout << "Middle name: ";
	getline(cin, str);
	sv2.setMidName(str);
	cout << "First name: ";
	getline(cin, str);
	sv2.setFirstName(str);
	cout << "New Student Name: " << sv2.LastName() << " " << sv2.MidName() << " " << sv2.FirstName() << endl;
	system("pause");
}