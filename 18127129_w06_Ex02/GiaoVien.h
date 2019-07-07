#pragma once
#include <iostream>
#include <string>
using namespace std;
class GiaoVien
{
protected:
	int ID;
	string name;
	float coeSalary;
	double salary;
	int dayOff;
public:
	void inputInfo();
	void outputInfo();
	double calcSalary();
	GiaoVien();
	~GiaoVien();
};

