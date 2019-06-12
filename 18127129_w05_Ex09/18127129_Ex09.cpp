#include "Date.h"
int main()
{
	Date d, d2(2019), d3(02, 2019), d4(10, 02, 2019), d5(d4);
	cout << "d1 " << d.ToString() << endl;
	cout << "d2 " << d2.ToString() << endl;
	cout << "d3 " << d3.ToString() << endl;
	cout << "d4 " << d4.ToString() << endl;
	cout << "d5 " << d5.ToString() << endl;
	cout << IsLeapYear(2400) << endl;
	cout << IsValidYear(13, 12, 1) << endl;
	d.Spare("24/12/2018");
	cout << d.ToString() << endl;
	system("pause");
}