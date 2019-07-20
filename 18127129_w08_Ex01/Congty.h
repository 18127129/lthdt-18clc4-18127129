#pragma once
#include "NVCN.h"
#include "NVSX.h"
#include "NVQL.h"
#include <vector>
class Congty
{
protected:
	vector <NV*> m_nv;
	int n1;
	int n2;
	int n3;
public:
	long totalSalary();
	void input();
	void output();
	void maxSalaryName();
	int quantitiesOfNVSX();
	int quantitiesOfNVCN();
	void NameUnder3M();
	long averageSalary();
	void findEmployeeByID();
	void findEmployeeByName();
	int quantitiesEmployeesBornInMay();
	~Congty();
};
