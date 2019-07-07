#include "DocGia.h"
void DocGia::inputInfo()
{
	cout << "ID: ";
	cin >> id;
	cin.ignore(10, '\n');
	cout << "Name: ";
	getline(cin, name);
	cout << "Due day: ";
	cin >> dueDay;
	cin.ignore(10, '\n');
	cout << "Gender: ";
	getline(cin, gender);
}
void DocGia::outputInfo()
{
	cout << "ID: " << id << endl;
	cout << "Name: " << name << endl;
	cout << "Due day: " << dueDay << endl;
	cout << "Gender: " << gender << endl;
}
DocGia::DocGia()
{
	id = 1;
	name = "Nguyen Van A";
	gender = "Male";
}
DocGia::~DocGia()
{
}
