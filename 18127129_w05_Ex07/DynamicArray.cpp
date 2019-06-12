#include "DynamicArray.h"
string DynamicArray::ToString()
{
	stringstream writer;
	for (int i = 0; i < len; i++)
		writer << a[i] << " ";
	return writer.str();
}
DynamicArray* DynamicArray::Parse(string line)
{
	int startPos = 0;
	int foundPos = line.find(", ", startPos);
	while (foundPos != string::npos)
	{
		int count = foundPos - startPos;
		string str = line.substr(startPos, count);
		int num = stoi(str);
		PushBack(num);
		startPos = foundPos + 2;
		foundPos = line.find(", ", startPos);
	}
	int count = line.length() - startPos;
	string str = line.substr(startPos, count);
	int num = stoi(str);
	PushBack(num);
	return this;
}
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