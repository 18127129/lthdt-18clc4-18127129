#include "Congty.h"
int main()
{
	Congty cty;
	cty.input();
	cty.output();
	cout << "Total Salary = " << cty.totalSalary() << endl;
	cty.maxSalaryName();
	cty.quantitiesOfNVSX();
	cty.quantitiesOfNVCN();
	cout << "Average Salary = " << cty.averageSalary() << endl;
	cty.NameUnder3M();
	cty.findEmployeeByID();
	cty.findEmployeeByName();
	cout << cty.quantitiesEmployeesBornInMay() << " employee borns in May" << endl;
	system("pause");
}
