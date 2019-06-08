#include "IntArray.h"
void main()
{
	// Using dynamic allocated array
	IntArray m1;
	IntArray m2(7);
	int a[100];
	int n = 7;
	for (int i = 0; i < n; i++)
	{
		a[i] = i * 2 / 7;
	}
	IntArray m3(a, n);
	IntArray m4(m2);
	IntArray m5;
	m5 = m2;
	cout << "m1 " << m1;
	cout << "m2 " << m2;
	cout << "m3 " << m3;
	cout << "m4 " << m4;
	cout << "m5 " << m5;
	cin >> m2;
	cout << "m2 " << m2;
	try
	{
		cout << m3[7] << endl;
	}
	catch (const char *s)
	{
		cout << s;
	}
	try
	{
		m3[7] = 1;
	}
	catch (const char *s)
	{
		cout << s;
	}
	cout << "(int)m4 = " << (int)m4 << endl;
	system("pause");
}