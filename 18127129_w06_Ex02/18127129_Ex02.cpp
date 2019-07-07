#include "GVCN.h"
int main()
{
	GiaoVien gv;
	GVCN gvcn;
	cout << "Input teacher infomation: " << endl;
	gv.inputInfo();
	cout << "Input HR teacher: " << endl;
	gvcn.inputInfo();
	cout << "Teacher: " << endl;
	gv.outputInfo();
	cout << "Salary = " << gv.calcSalary() << endl;
	cout << "HR Teacher: " << endl;
	gvcn.outputInfo();
	cout << "Salary = " << gvcn.calcSalary() << endl;
	system("pause");
}