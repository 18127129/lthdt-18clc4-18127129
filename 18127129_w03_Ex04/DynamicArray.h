#include <iostream>
using namespace std;
class DynamicArray
{
private:
	const int Initial_size = 128;
	int *a;
	int len;
	int max;
public:
	void display();
	void PushBack(int value);
	int GetAt(int index);
	DynamicArray();
	DynamicArray(int lenth);
	DynamicArray(int len, int* arr);
	DynamicArray(const DynamicArray& x);
	~DynamicArray();
};