#include "DynamicArray.h"
void DynamicArray::display()
{
	for (int i = 0; i < len; i++)
		cout << a[i] << " ";
	cout << endl;
}
void DynamicArray::PushBack(int value)
{
	len++;
	a[len - 1] = value;
}
int DynamicArray::GetAt(int index)
{
	return a[index];
}
DynamicArray::DynamicArray()
{
	max = Initial_size;
	a = new int[max];
}
DynamicArray::DynamicArray(int lenth)
{
	max = Initial_size;
	a = new int[max];
	len = lenth;
	for (int i = 0; i < len; i++)
	{
		a[i] = 0;
	}
}
DynamicArray::DynamicArray(int lenth, int* arr)
{
	max = Initial_size;
	a = new int[max];
	len = lenth;
	for (int i = 0; i < len; i++)
	{
		a[i] = arr[i];
	}
}
DynamicArray::DynamicArray(const DynamicArray& x)
{
	max = Initial_size;
	a = new int[max];
	len = x.len;
	for (int i = 0; i < x.len; i++)
	{
		a[i] = x.a[i];
	}
}
DynamicArray::~DynamicArray()
{
	delete[]a;
}