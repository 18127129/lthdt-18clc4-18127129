#include "Student.h"
int main()
{
	string last = "Nguyen";
	string mid = "Tan";
	string first = "Loc";
	Student p1, p2(last, mid, first), p3("Tuan", "Thanh"), p4(p1);
	cout << "Student 1: " << endl;
	cout << p1.fullName() << endl;
	cout << "Student 2: " << endl;
	cout << p2.fullName() << endl;
	cout << "Student 3: " << endl;
	cout << p3.fullName() << endl;
	cout << "Student 4: " << endl;
	cout << p4.fullName() << endl;
	cout << "Student 2 get name: " << endl;
	cout << p2.getLastName() << " " << p2.getMidName() << " " << p3.getFirstName() << endl;
	cout << "Student 2 set name: " << endl;
	cout << "last name: ";
	p2.setLastName();
	cout << "mid name: ";
	p2.setMidName();
	cout << "first name: ";
	p2.setFirstName();
	cout << "result: " << endl;
	cout << p2.fullName() << endl;
	system("pause");
}