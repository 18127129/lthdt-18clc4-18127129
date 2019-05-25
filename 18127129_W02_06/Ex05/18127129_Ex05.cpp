#include "Fraction.h"
int main()
{
	Fraction p;
	cout << "p = " << p.Num() << "/" << p.Den() << endl;
	Fraction p2(4, 5);
	cout << "p2 = " << p2.Num() << "/" << p2.Den() << endl;
	Fraction p3(p2);
	cout << "p3 = " << p3.Num() << "/" << p3.Den() << endl;
	int x;
	cout << "num = ";
	cin >> x;
	p.setNum(x);
	cout << "den = ";
	cin >> x;
	while (x == 0)
	{
		cout << "error, input again\nden= ";
		cin >> x;
	}
	p.setDen(x);
	cout << "new p = " << p.Num() << "/" << p.Den() << endl;
	system("pause");

}