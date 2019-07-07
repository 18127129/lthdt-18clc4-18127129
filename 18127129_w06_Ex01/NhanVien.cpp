#include "NhanVien.h"
void NhanVien::inputInfo()
{
	cout << "ID: ";
	cin >> id;
	cin.ignore('\n', 10);
	cout << "Name: ";
	getline(cin, name);
	cout << "Date of birth: ";
	cin >> dob;
	cin.ignore('\n', 10);
	cout << "Address: ";
	getline(cin, address);
}
void NhanVien::outputInfo()
{
	cout << "ID: " << id << endl;
	cout << "Name: " << name << endl;
	cout << "Date of birth: " << dob << endl;
	cout << "Address: " << address << endl;
	cout << "Salary: " << salary << endl;
}
NhanVien::NhanVien()
{
	id = "1";
	name = "Nguyen Van A";
	dob = "01/01/2000";
	address = "TP. HCM";
	salary = 0;
}
NhanVien::~NhanVien() {}