#include "NVCongNhat.h"
#include "NVSanXuat.h"
int main()
{
	NVSanXuat sx;
	NVCongNhat cn;
	cout << "Nhap thong tin nhan vien san xuat" << endl;
	sx.inputInfo();
	sx.calcSalary(10);
	cout << "Nhap thong tin nhan vien cong nhat" << endl;
	cn.inputInfo();
	cn.calcSalary(1);
	cout << "Nhan vien san xuat: " << endl;
	sx.outputInfo();
	cout << "Nhan vien cong nhat" << endl;
	cn.outputInfo();
	system("pause");
}