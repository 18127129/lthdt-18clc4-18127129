#include "DynamicArray.h"
int main()
{
	int *arr = new int[5];
	for (int i = 0; i < 5; i++)
		arr[i] = i * 2;
	DynamicArray a, a2, a3(5), a4(5, arr), a5(a3);
	a.Parse("5, 8, 12, 15, 612, 19");
	cout << "a1 " << a.ToString() << endl;
	cout << "a2 " << a2.ToString() << endl;
	cout << "a3 " << a3.ToString() << endl;
	cout << "a4 " << a4.ToString() << endl;
	cout << "a5 " << a5.ToString() << endl;
	system("pause");
}