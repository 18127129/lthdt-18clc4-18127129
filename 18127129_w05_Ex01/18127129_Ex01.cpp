#include "Line.h"
int main()
{
	Point a(1, 2), b(9, 5);
	Line l, l2(a, b), l3(4, 5, 7, 6);
	cout << "l1: " << l.ToString() << endl;
	cout << "l2: " << l2.ToString() << endl;
	cout << "l3: " << l3.ToString() << endl;
	l.Parse("(3, 4), (5, 9)");
	cout << "l Parse: " << l.ToString() << endl;
	system("pause");
}
