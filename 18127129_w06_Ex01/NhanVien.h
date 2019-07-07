#pragma once 
#include <iostream>
#include <string>
using namespace std;
class NhanVien
{
protected:
	string id;
	string name;
	string dob;
	string address;
	double salary;
public:
	void inputInfo();
	void outputInfo();
	NhanVien();
	~NhanVien();
};