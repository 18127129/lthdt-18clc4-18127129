#include "Fraction.h"
int main()
{
	Fraction x, x2(3 ,-4), x3(x2), x4;
	try
	{
		x.Parse("6/12");
	}
	catch (const char *s)
	{
		cout << s << endl;
	}
	try
	{
		cout << "x1 " << x.ToString() << endl;
	}
	catch (const char *s)
	{
		cout << s << endl;
	}
	cout << "x2 " << x2.ToString() << endl;
	cout << "x3 " << x3.ToString() << endl;
	cout << "x4 " << x4.ToString() << endl;
	system("pause");
}