#include "GiaoVien.h"
void GiaoVien::inputInfo()
{
	cout << "ID: ";
	cin >> ID;
	cin.ignore(10, '\n');
	cout << "Name: ";
	getline(cin, name);
	cout << "Coefficients salary: ";
	cin >> coeSalary;
	cout << "Basic salary: ";
	cin >> salary;
	cout << "Day off: ";
	cin >> dayOff;
}
void GiaoVien::outputInfo()
{
	cout << "ID: " << ID << endl;
	cout << "Name: " << name << endl;
	cout << "Coefficients salary: " << coeSalary << endl;
	cout << "Basic salary: " << salary << endl;
	cout << "Day off: " << dayOff << endl;
}
double GiaoVien::calcSalary()
{
	return coeSalary * salary - dayOff * 100000;
}
GiaoVien::GiaoVien()
{
	ID = 1;
	name = "Nguyen Van A";
	coeSalary = 0;
	salary = 0;
	dayOff = 0;
}
GiaoVien::~GiaoVien()
{
}
