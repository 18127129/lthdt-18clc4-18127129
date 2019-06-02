#include "DynamicArray.h"
int main()
{
	int n, x;
	cout << "n = ";
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	DynamicArray p(n, a), p2, p3(10), p4(p);
	cout << "array 1: " << endl;
	p.display();
	cout << "push array 1: ";
	cin >> x;
	p.PushBack(x);
	cout << "result: " << endl;
	p.display();
	cout << "array 2: " << endl;
	p2.display();
	cout << "array 3: " << endl;
	p3.display();
	cout << "array 4: " << endl;
	p4.display();
	cout << "first element of array 4: " << p4.GetAt(0) << endl;
	delete[]a;
	system("pause");
}