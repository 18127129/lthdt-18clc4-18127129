#include "IntArray.h"
IntArray& IntArray::operator =(const IntArray& x)
{
	delete[]a;
	n = x.n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = x.a[i];
	}
	return *this;
}
int& IntArray::operator [](int x)
{
	if (x <= 0 || x >= n)
		throw "there is no position\n";
	return a[x];
}
ostream& operator << (ostream& os, IntArray x)
{
	for (int i = 0; i < x.n; i++)
		os << x.a[i] << " ";
	cout << endl;
	return os;
}
istream& operator >> (istream& is, IntArray& x)
{
	delete[]x.a;
	cout << "n = ";
	is >> x.n;
	x.a = new int[x.n];
	for (int i = 0; i < x.n; i++)
		is >> x.a[i];
	return is;
}
IntArray::operator int()
{
	return n;
}

IntArray::IntArray()
{
	n = 1;
	a = new int(0);
}
IntArray::IntArray(int x)
{
	n = x;
	a = new int[n];
	for (int i = 0; i < n; i++)
		a[i] = 0;
}
IntArray::IntArray(int arr[], int x)
{
	n = x;
	a = new int[n];
	for (int i = 0; i < n; i++)
		a[i] = arr[i];
}
IntArray::IntArray(const IntArray& x)
{
	n = x.n;
	a = new int[n];
	for (int i = 0; i < n; i++)
		a[i] = x.a[i];
}
IntArray::~IntArray()
{
	delete[]a;
}
